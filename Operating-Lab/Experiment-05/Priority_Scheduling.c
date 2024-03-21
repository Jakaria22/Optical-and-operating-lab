#include <stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[], int priority[]) {
    wt[0] = 0; // Waiting time for first process is 0
    // calculating waiting time
    for (int i = 1; i < n ; i++)
        wt[i] = bt[i-1] + wt[i-1];
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    // calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}

void findAvgTime(int processes[], int n, int bt[], int priority[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    // calculating waiting time of all processes
    findWaitingTime(processes, n, bt, wt, priority);

    // calculating turnaround time of all processes
    findTurnAroundTime(processes, n, bt, wt, tat);

    // Display processes along with all details
    printf("Processes  Burst time  Waiting time  Turnaround time  Priority\n");

    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("   %d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i], priority[i]);
    }

    // Calculate average waiting time and average turnaround time
    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;
    printf("\nAverage waiting time = %.2f\n", avg_wt);
    printf("Average turnaround time = %.2f\n", avg_tat);
}

int main() {
    // Example processes, burst times, and priorities
    int processes[] = {1, 2, 3, 4};
    int n = sizeof processes / sizeof processes[0];
    int burst_time[] = {6, 8, 7, 3};
    int priority[] = {2, 1, 3, 4};

    findAvgTime(processes, n, burst_time, priority);

    return 0;
}
