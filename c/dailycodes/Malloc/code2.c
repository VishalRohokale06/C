#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player{

	int jerNo;
	char pName[20];
	int avg;

};

struct Player *cPlayer;

void main(){

	cPlayer = malloc(sizeof(struct Player));
	(*cPlayer).jerNo=7;
	strcpy(cPlayer->pName,"MSD");
	cPlayer->avg=55;

	printf("Start Main\n");
	printf("JerNo:%d\n",(*cPlayer).jerNo);
	printf("PlayerName:%s\n",cPlayer->pName);
	printf("Avg:%d\n",cPlayer->avg);
	printf("End Main\n");
}
