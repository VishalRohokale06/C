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
        
	for(int i=0;i<row;i++){
		int flag=0;
		int sum=0;
		for(int j=0;j<column;j++){
		if(i%2==0){
			sum+=arr[i][j];
			flag=1;
		}
		
		}
		if(flag==1){
		printf("Sum of row %d = %d\n",i+1,sum);
		}
	}
}
