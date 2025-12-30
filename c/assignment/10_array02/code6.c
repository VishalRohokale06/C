#include <stdio.h>

void main(){

	int size;
	printf("Enter the size:");
	scanf("%d",&size);

	double heights[size];
	int count = 0;

	printf("Enter the heights:\n");
	while(count<size){
		double height;
		scanf("%lf",&height);

		if(height>=5.5 && height<=6){
		heights[count]=height;
	count++;	
		}else{
			printf("Age shall not be greater than 6ft and less than 5.5ft.\n");
		}
	}
	for(int i=0;i<size;i++){
		printf("%lf\n",heights[i]);
	}
}

