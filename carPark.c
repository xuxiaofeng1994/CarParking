#define CAR_MAX 10
#define CAR_TEMP_MAX 10

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
	定义车库的数组
*/
struct 
{
	static STACK_TYPE park[CAR_MAX];
	static int topElement = -1;
	static int const lengthMax = CAR_MAX;

}carPark;

/*
	定义用于便道的数组
*/
struct 
{
	static STACK_TYPE park[CAR_TEMP_MAX];
	static int topElementi = -1;
	static const lengthMax = CAR_TEMP_MAX;
}carParkTemp;

