#include <stdio.h>

void main(){

	int row;
	printf("Enter row=");
	scanf("%d",&row);

	int column;
	printf("Enter column=");
	scanf("%d",&column);

	int arr[row][column];

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<column;j++){
			sum+=arr[i][j];
		}
		printf("Sum of row %d = %d\n",i+1,sum);
	}
}
