#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], ct[n], rt[n], wt[n], tat[n];

    // Input Arrival Time and Burst Time for each process
    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time for Process %d: ", i + 1);
        scanf("%d", &at[i]);
        printf("Enter Burst Time for Process %d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; // Initialize remaining time with burst time
    }

    int complete = 0, time = 0, check = 0;
    int shortest = -1, minRt = INT_MAX;

    // Process until all processes are complete
    while (complete != n) {
        shortest = -1;
        minRt = INT_MAX;

        // Find the process with the shortest remaining time at the current time
        for (int j = 0; j < n; j++) {
            if (at[j] <= time && rt[j] < minRt && rt[j] > 0) {
                minRt = rt[j];
                shortest = j;
                check = 1;
            }
        }

        // If no process is found, increment the time
        if (shortest == -1) {
            time++;
            continue;
        }

        // Reduce the remaining time of the shortest process
        rt[shortest]--;
        
        // If the process is complete
        if (rt[shortest] == 0) {
            complete++;
            check = 0;
            ct[shortest] = time + 1;
            tat[shortest] = ct[shortest] - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
            minRt = INT_MAX; // Reset minRt for the next selection
        }

        time++;
    }

    // Display results
    printf("Process\tAT\tBT\tCT\tTAT\tWT\n");
    float totalWT = 0, totalTAT = 0;
    for (int i = 0; i < n; i++) {
        totalWT += wt[i];
        totalTAT += tat[i];
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    // Calculate and display average WT and TAT
    printf("Average Waiting Time: %.2f\n", totalWT / (float)n);
    printf("Average Turnaround Time: %.2f\n", totalTAT / (float)n);

    return 0;
}

