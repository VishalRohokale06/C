#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Player{
	int jerNo;
	char playerName[20];
	float avg;
};

struct Player *cPlayer = NULL;

void main(){
	cPlayer = malloc(sizeof(struct Player));
	(*cPlayer).jerNo = 7;
	strcpy((*cPlayer).playerName,"MSD");
	cPlayer->avg = 50.00;

	printf("%d\n",cPlayer->jerNo);
	printf("%s\n",cPlayer->playerName);
	printf("%lf\n",cPlayer->avg);

	struct Player *cricPlayer = malloc(sizeof(struct Player));

	(*cricPlayer).jerNo = 45;
        strcpy((*cricPlayer).playerName,"Rohit");
        cricPlayer->avg = 66.00;

	printf("%d\n",cricPlayer->jerNo);
        printf("%s\n",cricPlayer->playerName);
        printf("%lf\n",cricPlayer->avg);
}
