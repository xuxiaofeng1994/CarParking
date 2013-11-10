int add(int idNum,int carNum,int timeEnter)
{
	if(idNum < 1 || idNum > CAR_MAX)
		return 0;
	current = (carInfo *)malloc(sizeof(carInfo));
	if(current == NULL)
		return 0;
	if(head == NULL)
		head = current;
	else
		previous->next = current;
	current->next = NULL;
	
	current->idNum = idNum;
	current->carNum = carNum;
	current->timeEnter = timeEnter;
	
	current->ifPark = 1;
	previous = current;
	return 1;
}

void del(int x)
{
	current = head;
	while(current != NULL && current->idNum != x)
	{
		current = current->next;
	}
	current->ifPark = 0;
	printf("del the idNum is %d\n",x);
}

#if 0
int testIdNum(int x)
{
	carInfo *temp;
	temp = head;
	while(temp !=NULL)
	{
		if(temp->ifPark == 1)
		{
			if(temp->idNum == x)
				return 0;
		}
		temp = temp->next;
	}
	return 1;
}
#endif

int getIdNum(void)
{
	carInfo *temp;
	int num = 0;
	temp = head;
	while(temp != NULL)
	{
		if(temp->ifPark == 0)
		{
			if(temp->idNum != 0)
				return temp->idNum;
		}else
			num++;
		temp = temp->next;
	}
	num += 1;
	if(isFullLink(num))
	{
		printf("The car parking is full!!\n");
		return 0;
	}
	return num;
}

int isFullLink(int x)
{
	return x >= CAR_MAX + 1;
}

