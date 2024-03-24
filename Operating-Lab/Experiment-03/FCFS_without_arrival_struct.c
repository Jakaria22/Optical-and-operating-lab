#include <stdio.h>

struct Process {
    int id;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

void calculate_times(struct Process processes[], int n) {
    int total_waiting_time = 0;
    float total_turnaround_time = 0;

    printf("Process\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    int current_time = 0;
    for (int i = 0; i < n; i++) {
        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time;
        processes[i].waiting_time = current_time;
        current_time += processes[i].burst_time;
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].id, processes[i].burst_time,
               processes[i].completion_time, processes[i].turnaround_time, processes[i].waiting_time);

        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);
    printf("Average Waiting Time: %.2f\n", total_waiting_time / (float) n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burst_time);
        processes[i].id = i + 1;
    }

    calculate_times(processes, n);

    return 0;
}
