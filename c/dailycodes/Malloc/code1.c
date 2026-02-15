/*
 void *malloc(size_t);
               or
 void *malloc(typedef long unsigned int size_t);
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Player{
	int jerNo;
	char playerName[20];
	float avg;
};

struct Player *cPlayer=NULL;
	
void fun(){
        
        cPlayer = malloc(sizeof(struct Player));
        (*cPlayer).jerNo=7;
        strcpy((*cPlayer).playerName,"MSD");
        (*cPlayer).avg=55.55;

	printf("JerNo:%d\n",(*cPlayer).jerNo);
	printf("PlayerName:%s\n",(*cPlayer).playerName);
	printf("Avg:%f\n",(*cPlayer).avg);

	struct Player *cricPlayer = malloc(sizeof(struct Player));
        (*cPlayer).jerNo=7;
        strcpy((*cPlayer).playerName,"MSD");
        (*cPlayer).avg=55.55;
}

void main(){
        
        cPlayer = malloc(sizeof(struct Player));
        (*cPlayer).jerNo=7;
        strcpy((*cPlayer).playerName,"MSD");
        (*cPlayer).avg=55.55;

	printf("Start Main\n");
	fun();
	printf("JerNo:%d\n",(*cPlayer).jerNo);
        printf("PlayerName:%s\n",(*cPlayer).playerName);
        printf("Avg:%f\n",(*cPlayer).avg);
	printf("End Main\n");
}
