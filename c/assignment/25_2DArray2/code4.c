#include <stdio.h>

void main(){

        int row;
        printf("Enter row=");
        scanf("%d",&row);

        int column;
        printf("Enter column=");
        scanf("%d",&column);

       int arr[row][column];
       printf("Enter array elements:\n");
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                scanf("%d",&arr[i][j]);
        }
       }

       int rowNo=0;
       int maxSum=0;

       for(int i=0;i<row;i++){
	       int sum=0;
        for(int j=0;j<column;j++){
		sum+=arr[i][j];
	}
	if(sum>maxSum){
		maxSum=sum;
		rowNo=i;
	}
       }
       printf("Maximum sum is found at row %d and the sum is %d.\n",rowNo,maxSum);
}
