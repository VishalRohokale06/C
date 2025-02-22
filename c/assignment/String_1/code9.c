#include <stdio.h>
#include <stdlib.h>

void main(){

        char *str = malloc(100*sizeof(char));

        int i=0;
        int flag=0;
        int flag1=0;

        fgets(str,100,stdin);

        while(str[i]!='\0'){
                if(str[i]>='0' && str[i]<='9'){
                        flag=1;
                }
                else if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
                flag1=1;
                }
                i++;
        }
        if(flag==1 && flag1==1){
                printf("Given string doesn't contain only digits\n");
        }else if(flag==1 && flag1==0){
                printf("The given string contain only digits\n");
        }else if(flag==0 && flag1==1){
                printf("The given string contain only alphabet\n");
        }

        else{
                printf("Nothing\n");
        }
}
