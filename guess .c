#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void game()
{
	//����һ�������
	int ret = 0;

	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.01.01.00:00:00��
	ret = rand()%100+1; //����һ�������
	int a = 0;
	while (1)
	{
		printf("����������\t\n");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("��С��\n");
		}
		else if (a > ret)
		{
			printf("�´���\n");
		}
		else if (a = ret)
		{
			printf("��ϲ�㣬�¶���\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			break;

		}
	} while (input);
}
