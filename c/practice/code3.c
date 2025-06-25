#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter no of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], rt[n], ct[n], tat[n], wt[n];
    for (int i = 0; i < n; i++) {
        printf("Enter AT for P%d: ", i + 1);
        scanf("%d", &at[i]);
        printf("Enter BT for P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];  // remaining time initially equals burst time
    }

    int complete = 0, time = 0, minRt = INT_MAX;
    int shortest = 0;
    int check = 0;

    while (complete != n) {
        for (int j = 0; j < n; j++) {
            if ((at[j] <= time) && (rt[j] < minRt) && rt[j] > 0) {
                minRt = rt[j];
                shortest = j;
                check = 1;
            }
        }

        if (check == 0) {
            time++;
            continue;
        }

        rt[shortest]--;
        minRt = rt[shortest];

        if (minRt == 0) {
            minRt = INT_MAX;
        }

        if (rt[shortest] == 0) {
            complete++;
            check = 0;
            ct[shortest] = time + 1;
            tat[shortest] = ct[shortest] - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
        }
        time++;
    }

    printf("Process     BT      AT      WT      TAT\n");
    float totalWT = 0, totalTAT = 0;
    for (int i = 0; i < n; i++) {
        totalWT += wt[i];
        totalTAT += tat[i];
        printf("P%d          %d       %d       %d       %d\n", i + 1, bt[i], at[i], wt[i], tat[i]);
    }
    printf("Avg WT: %.2f\n", totalWT / n);
    printf("Avg TAT: %.2f\n", totalTAT / n);

    return 0;
}

