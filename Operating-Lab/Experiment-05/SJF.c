#include <stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    int rt[n];
    // Copy burst times into remaining times
    for (int i = 0; i < n; i++)
        rt[i] = bt[i];
    int complete = 0, t = 0, minm = 9999, shortest = 0, finish_time;
    int check = 0;
    // Process until all processes are done
    while (complete != n) {
        // Find the shortest remaining time process
        for (int j = 0; j < n; j++) {
            if ((rt[j] <= t) && (rt[j] < minm) && (rt[j] > 0)) {
                minm = rt[j];
                shortest = j;
                check = 1;
            }
        }

        if (check == 0) {
            t++;
            continue;
        }

        // Reduce remaining time for the chosen process
        rt[shortest]--;

        // Update minimum
        minm = rt[shortest];
        if (minm == 0)
            minm = 9999;

        // If process is completed
        if (rt[shortest] == 0) {
            complete++;
            check = 0;

            // Find finish time of current process
            finish_time = t + 1;

            // Calculate waiting time
            wt[shortest] = finish_time - bt[shortest];
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }
        // Move to next second
        t++;
    }
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    // Turnaround time = Burst time + Waiting time
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findAvgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    // Calculate waiting time of all processes
    findWaitingTime(processes, n, bt, wt);

    // Calculate turnaround time of all processes
    findTurnAroundTime(processes, n, bt, wt, tat);

    // Display processes along with their burst time, waiting time, and turnaround time
    printf("Processes  Burst time  Waiting time  Turnaround time\n");

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("   %d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    // Calculate average waiting time and average turnaround time
    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;
    printf("\nAverage waiting time = %.2f\n", avg_wt);
    printf("Average turnaround time = %.2f\n", avg_tat);
}

int main() {
    // Example processes and burst times
    int processes[] = {1, 2, 3, 4};
    int n = sizeof processes / sizeof processes[0];
    int burst_time[] = {6, 8, 7, 3};

    findAvgTime(processes, n, burst_time);

    return 0;
}
