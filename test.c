#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//9*9³Ë·¨±í
//
int main()
{
	int i = 0;
	int j = 0;
	int r = 0;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j <= i;j++)
		{
			r = i*j;
			printf("%d*%d =%2d ", j, i, r);
		}
		printf("\n");
	}
	

}