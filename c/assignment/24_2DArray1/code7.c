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
        int product=1;
	for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                      if(i==j){
			      product*=arr[i][j];
		      }  
                }
        }
	printf("Product of Primary Diagonal : %d\n",product);
}
