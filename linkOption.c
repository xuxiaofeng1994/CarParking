int add(int idNum,int carNum,int timeEnter)
{
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

	previous = current;
	return 1;
}

void del(int x)
{
	carInfo *temp;
	current = head;
	while(current != NULL && current->idNum != x)
	{
		previous = current;
		current = current->next;
	}
	temp = current;
	previous->next =current->next;
	free(temp);
	printf("del the idNum is %d\n",x);
}


