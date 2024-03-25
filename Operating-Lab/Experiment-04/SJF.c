#include <stdio.h>

void sort(int burst_times[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (burst_times[j] > burst_times[j + 1]) {
                int temp = burst_times[j];
                burst_times[j] = burst_times[j + 1];
                burst_times[j + 1] = temp;
            }
        }
    }
}

float calculate_average_waiting_time(int burst_times[], int n) {
    float total_waiting_time = 0;
    float average_waiting_time;
    int cumulative_waiting_time = 0;
    for (int i = 0; i < n; i++) {
        total_waiting_time += cumulative_waiting_time;
        cumulative_waiting_time += burst_times[i];
    }
    average_waiting_time = total_waiting_time / n;
    return average_waiting_time;
}

float calculate_average_turnaround_time(int burst_times[], int n) {
    float total_turnaround_time = 0;
    int cumulative_turnaround_time = 0;
    for (int i = 0; i < n; i++) {
        cumulative_turnaround_time += burst_times[i];
        total_turnaround_time += cumulative_turnaround_time;
    }
    return total_turnaround_time / n;
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burst_times[n];

    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &burst_times[i]);
    }

    sort(burst_times, n);
    float avg_waiting_time = calculate_average_waiting_time(burst_times, n);
    float avg_turnaround_time = calculate_average_turnaround_time(burst_times, n);

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
