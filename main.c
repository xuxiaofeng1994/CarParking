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
		printf("the carInfo is %d\n",current->idNum);
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
	add(1,2,1200);
	add(2,3,1300);
	add(3,4,1400);
	del(2);
	printLink();

}
