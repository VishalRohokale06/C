#include <stdio.h>

void main(){

	int row;
	printf("Enter row=");
	scanf("%d",&row);
	
	int column;
	printf("Enter column=");
	scanf("%d",&column);

	int arr[row][column];
	printf("Enter elements:\n");

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                        if(arr[i][j]%3==0){
				printf("%d\t",arr[i][j]);
			}
                }

        }
	puts("");
}
