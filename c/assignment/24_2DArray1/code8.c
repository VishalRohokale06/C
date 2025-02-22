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
	int sum=0;
	for(int i=0;i<row;i++){
		sum+=arr[i][row-i-1];
	}
	printf("Sum of Secondary Diagonal:%d\n",sum);
}
