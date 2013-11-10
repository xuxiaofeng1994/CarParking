#include"stack.h"
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#include"carPark.c"
#include"stackOption.c"
#include"linkOption.c"
#define STACK_DEBUG 0

void printStack(void)
{
	int i;
	for(i = 0;i <= topElement;i++)
	{
		printf("the carNum is %d\n",park[i]);
	}
}

void printLink(void)
{
	current = head;
	while(current != NULL)
	{
		if(current->ifPark == 1)
			printf("the carInfo is %d,%d\n",current->idNum,current->carNum);
		current = current->next;
	}
}

int main()
{
#if STACK_DEBUG
	push(110);
	printf("the test for top :%d\n",top());
	push(112);
	push(119);
	push(222);
	pop();
	printStack();
	pop();
	printStack();
	pop();
	printStack();
	pop();
	printStack();
	pop();
	printStack();
#endif
	add(getIdNum(),2,1200);
	add(getIdNum(),3,1300);
	add(getIdNum(),4,1400);
	add(getIdNum(),5,1500);
//	add(5,6,1700);
//	add(6,7,1800);
//	add(7,7,1800);
//	add(2,5,1300);
	del(3);
//	add(3,8,1900);
	printLink();
	printf("The next IdNum is %d\n",getIdNum());

}
