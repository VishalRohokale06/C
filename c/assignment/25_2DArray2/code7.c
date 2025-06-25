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
         
       for(int i=0;i<row;i++){
	      for(int j=0;j<column;j++){

	       if((i==0&&j==0) ||
       (i==0&&j==row-1) ||
       (i==row-1&&j==0) ||
      (i==row-1&&j==row-1)){
             
       }else{
         printf("%d\t",arr[i][j]);
       }
	      }
       }
       puts("");
       }
