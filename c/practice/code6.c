#include <stdio.h>
#include <limits.h>

int main(){
	int n;
	printf("Enter o of p:");
	scanf("%d",&n);

	int at[n],bt[n],ct[n],rt[n],wt[n],tat[n];

	for(int i=0;i<n;i++){
		printf("Enter AT for p%d:",i+1);
		scanf("%d",&at[i]);
		printf("Enter BT for p%d:",i+1);
                scanf("%d",&bt[i]);
		rt[i]=bt[i];
	}

	int time=0,check=0,shortest=0,complete=0,minRt=INT_MAX;

	while(complete != n){
		for(int j=0;j<n;j++){
			if((at[j]<=time) && (rt[j]<minRt) && (rt[j]>0)){
			minRt=rt[j];
		shortest=j;
	check=1;
			}
		}
	if(check==0){
	time++;
continue;
	}

	rt[shortest]--;
	minRt=INT_MAX;

	if(minRt==0){
		minRt=INT_MAX;
	}

	if(rt[shortest]==0){
		complete++;
		check=0;
		ct[shortest] = time+1;
		tat[shortest] = ct[shortest]-at[shortest];
		wt[shortest] =tat[shortest]-bt[shortest];
	}
	time++;
	}

	printf("Process\tAT\tBT\tCT\tWT\tTAT\n");
	float totalWT=0,totalTAT=0;
	for(int i=0;i<n;i++){
		totalWT += wt[i];
		totalTAT += tat[i];
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ct[i],wt[i],tat[i]);
	}
		printf("Avg wt : %.2f\n",totalWT/n);
		printf("Avg tat: %.2f\n",totalTAT/n);

		return 0;
}
