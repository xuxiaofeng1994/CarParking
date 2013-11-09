#define CAR_MAX 3
/*
	定义车辆信息的结构体
*/
typedef struct node
{
	int idNum;
	int carNum;
	int timeEnter;
	int timeOut;
	int priceHour;
	int priceTotal;
	struct node * next;
}carInfo;

/*
	定义便道的数组
*/
static STACK_TYPE park[CAR_MAX];
static int topElement = -1;
