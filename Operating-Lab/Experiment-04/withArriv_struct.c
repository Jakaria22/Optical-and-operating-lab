#include <stdio.h>
#include <string.h>

// Structure to represent a process
typedef struct {
    char name[10];
    int arrival_time;
    int burst_time;
    int start_time;
    int finish_time;
    int waiting_time;
    int turnaround_time;
} Process;

int main() {
    int n, i, j, temp;
    int total_waiting_time = 0, total_turnaround_time = 0;
    double avg_waiting_time, avg_turnaround_time;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process processes[n];

    // Input process details
    for (i = 0; i < n; i++) {
        printf("Enter process name, arrival time, and burst time for process %d: ", i + 1);
        scanf("%s%d%d", processes[i].name, &processes[i].arrival_time, &processes[i].burst_time);
    }

    // Sort processes by burst time
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (processes[i].burst_time > processes[j].burst_time) {
                temp = processes[i].burst_time;
                processes[i].burst_time = processes[j].burst_time;
                processes[j].burst_time = temp;

                temp = processes[i].arrival_time;
                processes[i].arrival_time = processes[j].arrival_time;
                processes[j].arrival_time = temp;

                char temp_name[10];
                strcpy(temp_name, processes[i].name);
                strcpy(processes[i].name, processes[j].name);
                strcpy(processes[j].name, temp_name);
            }
        }
    }

    // Calculate start time, finish time, waiting time, and turnaround time
    for (i = 0; i < n; i++) {
        if (i == 0)
            processes[i].start_time = processes[i].arrival_time;
        else
            processes[i].start_time = processes[i - 1].finish_time;
        processes[i].waiting_time = processes[i].start_time - processes[i].arrival_time;
        processes[i].finish_time = processes[i].start_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].finish_time - processes[i].arrival_time;
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    // Calculate average waiting time and average turnaround time
    avg_waiting_time = (double)total_waiting_time / n;
    avg_turnaround_time = (double)total_turnaround_time / n;

    // Display results
    printf("\nProcess Name\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].name, processes[i].arrival_time, processes[i].burst_time, processes[i].waiting_time, processes[i].turnaround_time);
    }
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
