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

       printf("%d\n",arr[0][0]);
       printf("%d\n",arr[0][row-1]);
       printf("%d\n",arr[row-1][0]);
       printf("%d\n",arr[row-1][row-1]);
} 
