#include <stdio.h>
#include <string.h>

struct Company{

	char cmpName[20];
	char cmpLocation[20];
	int empCount;
};

void main(){

	const struct Company cmp={"Veritas","Balewadi",100};

	printf("CmpName=%s\n",cmp.cmpName);
	printf("CmpLocation=%s\n",cmp.cmpLocation);
	printf("EmpCount=%d\n",cmp.empCount);

	//strcpy(cmp.empName,"VeriMeta");
	cmp.empCount=90;                 //error

}
