#include <stdio.h>

struct{

	int jerNo;
	char playerName[20];

}pObj={18,"Virat"};

void main(){

	printf("%d\n",pObj.jerNo);
	printf("%s\n",pObj.playerName);
}
