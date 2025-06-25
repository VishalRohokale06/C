#include <stdio.h>
#include <stdbool.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr1[size];
	printf("Enter the first array elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}

	int arr2[size];
        printf("Enter the second array elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr2[i]);
        }
        
	printf("Uncommon elements:\n");
	for(int i=0;i<size;i++){
		bool isUncommon=true;
		for(int j=0;j<size;j++){
		if(arr1[i]==arr2[j]){
			isUncommon=false;
			break;
		}
		}
	if(isUncommon){
		printf("%d\n",arr1[i]);
		}
		}

	 for(int i=0;i<size;i++){
                bool isUncommon=true;
                for(int j=0;j<size;j++){
                if(arr2[i]==arr1[j]){
                        isUncommon=false;
                        break;
                }
                }
        if(isUncommon){
                printf("%d\n",arr2[i]);
                }
                }
}
