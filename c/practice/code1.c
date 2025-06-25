#include <stdio.h>

int main(){
    int arrival_time[10], burst_time[10], temp[10];
    int i,smallest,count = 0,time,limit;
    double wait_time = 0, turnaround_time = 0, end;
    float average_wating_time, average_turnaround_time;

    printf("\nEnter the total number of processes: ");
    scanf("%d", &limit);

    printf("\nEnter Arrival Time and Burst Time of Process:\n");
    for(i=0;i<limit;i++){
        printf("\nEnter Arrival Time of Process %d :",i+1);
        scanf("%d", &arrival_time[i]);

        printf("Enter Burst Time of Process %d :", i+1);
        scanf("%d",&burst_time[i]);

        temp[i] = burst_time[i];
    }

    burst_time[9] = 9999;
    for(time = 0;count != limit;time++){
        smallest=9;
        for(i=0;i<limit;i++){
            if(arrival_time[i] <= time && burst_time[i] < burst_time[smallest] && burst_time[i] > 0){
                smallest = i;
            }
        }

        burst_time[smallest]--;
        if(burst_time[smallest] == 0){
            count++;
            end = time+1;
            wait_time = wait_time+end - arrival_time[smallest] - temp[smallest];
            turnaround_time = turnaround_time + time - arrival_time[smallest];
        }
    }

    average_wating_time = wait_time/limit;
    average_turnaround_time= turnaround_time/limit;

    printf("\n Average wating time:\t\t%lf",     average_wating_time);
    printf("\n average turnaround time:\t\t%lf", average_turnaround_time);
    printf("\n");
    return 0;
}
