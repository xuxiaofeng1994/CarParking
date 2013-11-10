int add(int idNum,int carNum,int timeEnter)
{
	assert(!isFullLink(idNum));
	current = (carInfo *)malloc(sizeof(carInfo));
	if(current == NULL)
		return 0;
	if(head == NULL)
		head = current;
	else
		previous->next = current;
	current->next = NULL;
	
	if(testIdNum(idNum) == 0)
	{
		free(current);
		printf("Sorry,your idNum has been exit!!\n");
		return 0;
	}

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
	return num+1;
}

int isFullLink(int x)
{
	return x == CAR_MAX + 1;
}

