#include <stdio.h>

typedef struct Process {
    int burst_time;
} Process;

void sort(Process processes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].burst_time > processes[j + 1].burst_time) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}

float calculate_average_waiting_time(Process processes[], int n) {
    float total_waiting_time = 0;
    float average_waiting_time;
    int cumulative_waiting_time = 0;
    for (int i = 0; i < n; i++) {
        total_waiting_time += cumulative_waiting_time;
        cumulative_waiting_time += processes[i].burst_time;
    }
    average_waiting_time = total_waiting_time / n;
    return average_waiting_time;
}

float calculate_average_turnaround_time(Process processes[], int n) {
    float total_turnaround_time = 0;
    int cumulative_turnaround_time = 0;
    for (int i = 0; i < n; i++) {
        cumulative_turnaround_time += processes[i].burst_time;
        total_turnaround_time += cumulative_turnaround_time;
    }
    return total_turnaround_time / n;
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process processes[n];

    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
    }

    sort(processes, n);
    float avg_waiting_time = calculate_average_waiting_time(processes, n);
    float avg_turnaround_time = calculate_average_turnaround_time(processes, n);

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
