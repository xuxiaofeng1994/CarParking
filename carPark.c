#define CARPARKMAX 10
#define TEMPCARPARKMAX 10

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
	struct node * next;;
}

/*
	定义车库的数组
*/
static int carPark[CARPARKMAX];

/*
	定义用于便道的数组
*/
static int tempCarPark[TEMPCARPARKMAX];

