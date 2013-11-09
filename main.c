#include"stack.h"
#include<stdio.h>
#include<assert.h>

#include"carPark.c"
#include"stackOption.c"

void printStack(void)
{
	int i;
	for(i = 0;i <= topElement;i++)
	{
		printf("the carNum is %d\n",park[i]);
	}
}

int main()
{
	push(110);
	printStack();
}
