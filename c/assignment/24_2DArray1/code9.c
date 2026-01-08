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
        int primarysum=0;
	int secondarysum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(i==j){
				primarysum+=arr[i][j];
			}
		}
		
	}
	for(int i=0;i<row;i++){
                secondarysum+=arr[i][row-i-1];
        }
//	printf("%d\n",primarysum);
//	printf("%d\n",secondarysum);
	printf("Product of Sum of Primary and Secondary Diagonal :%d\n",primarysum*secondarysum);
}
