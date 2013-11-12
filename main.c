#include"stack.h"
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#include"carPark.c"
#include"stackOption.c"
#include"linkOption.c"
#define STACK_DEBUG 1
#define perHour 5

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

int isEnter(void)
{

}
int isLeave()
{
	
}
int time(void)
{

}

int main()
{
	int idNum,carNum,timeEnter,timeOut;
	printf("######################################\n");
	printf("########Welcome To This CarParking####\n");
	while(1)
	{
		if(isEnter())
		{
				idNum = getIdNum();
				if(idNum == 0)
				{
					if(isFull() == 1)
					{
						printf("对不起，车库和便道都已满\n");
						return 0;
					}else
					{
						printf("对不起车库已满，您可以在便车道等候\n");
					}
		
				}else
				{
					printf("在进入车库之前，请输入您的车牌号：\n");
					scanf("%d%d",&carNum);
					timeEnter = time();
					printf("您现在可以进入车库，您的车位号为%d\n",idNum);
					add(idNum,carNum,timeEnter);
				}
		}
		if(isLeave())
		{
			del(isLeave());
			timeOut = time();
			printf("您的费用是%d元\n",(timeEnter - timeOut)*perHour);
			if(isEmpty() == 0)
				printf("%d号车位现已空闲，请便车道上的车进入车库\n");	
		}
	}
}


