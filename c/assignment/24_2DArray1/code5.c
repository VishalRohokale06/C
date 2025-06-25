#include <stdio.h>

void main(){

	int row;
	printf("Enter row=");
	scanf("%d",&row);

	int column;
	printf("Enter column=");
	scanf("%d",&column);
        
	int arr[row][column],colSum[column];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(int j=0;j<column;j++){
		colSum[j]=0;
		for(int i=0;i<row;i++){
			colSum[j]+=arr[i][j];
		}
	}

	printf("Sum of each column:\n");
	for(int j=0;j<column;j++){
		printf("Column %d: %d\n",j,colSum[j]);
	}
}
