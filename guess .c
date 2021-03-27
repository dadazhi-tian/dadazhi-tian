#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void game()
{
	//生成一个随机数
	int ret = 0;

	//时间戳：当前计算机的时间-计算机的起始时间（1970.01.01.00:00:00）
	ret = rand()%100+1; //生成一个随机数
	int a = 0;
	while (1)
	{
		printf("请输入数字\t\n");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("猜小了\n");
		}
		else if (a > ret)
		{
			printf("猜大了\n");
		}
		else if (a = ret)
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}
}

void menu()
{


	printf("***********************\n");
	printf("******play:  1*********\n");
	printf("******exit:  0*********\n");
	
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
	
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			break;

		}
	} while (input);
}
