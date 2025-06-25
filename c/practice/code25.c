#include <stdio.h>

void main(){

	char name[] = "shashi";
	char name1[]="kanha";
	char name2[] = {'v','i','s','h','a','l'};

        printf("%ld\n",sizeof(name));
        printf("%ld\n",sizeof(name1));
        printf("%ld\n",sizeof(name2));

	printf("%p\n",name);
	printf("%p\n",name1);
	printf("%p\n",name2);
}
