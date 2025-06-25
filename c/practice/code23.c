#include <stdio.h>
#include <string.h>

void main(){

	char* name = "Vishal";

	printf("%ld\n",sizeof(name));
	printf("%s\n",name);
	printf("%ld\n",strlen(name));


	char name1[20] = "Vishal";

        printf("%ld\n",sizeof(name1));
        printf("%s\n",name1);
        printf("%ld\n",strlen(name1));

	char name2[] = {'v','i','s','h','a','l','\0'};

        printf("%ld\n",sizeof(name2));
        printf("%s\n",name2);
        printf("%ld\n",strlen(name2));

	printf("%ld\n",sizeof("Vishal"));
}
