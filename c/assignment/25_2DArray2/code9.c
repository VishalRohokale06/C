#include<stdio.h>


int isCheck(int num){
         int sum=0;
        while(num>0){
		int dig =num%10;
		sum+=dig;
		num/=10;
	}
        return sum;
}

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
      printf("Output:\n");
       for(int i=0;i<row;i++){
              for(int j=0;j<column;j++){
                  int sum = isCheck(arr[i][j]);
                   printf("%d\t",sum); 
		  	   
       }
       }
       puts("");   
}
