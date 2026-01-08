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

	printf("Output:\t%d\t%d\t%d\t%d\n",
			arr[0][0],
			arr[0][row-1],
			arr[row-1][0],
			arr[row-1][column-1]
	      );

}
