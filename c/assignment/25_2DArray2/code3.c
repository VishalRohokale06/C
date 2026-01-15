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
       
       int num;
       printf("Enter element to search:");
       scanf("%d",&num);
       int flag=0;
       int a;
       int b;
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                if(arr[i][j]==num){
                        flag=1;
			a=i;
			b=j;
                }
        }
       }
       if(flag==1){
	       printf("Element found at row %d column %d.\n",a,b);
       }else{
	       printf("No element found.\n");
       }
}
