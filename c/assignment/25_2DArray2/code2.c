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
       printf("Sum of all even elements: ");
       int sum=0;
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                if(arr[i][j]%2==0){
                        sum+=arr[i][j];
                }
        }

       }
       printf("%d\n",sum);
}
