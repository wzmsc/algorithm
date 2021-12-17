/*
	分析：
	当有n个运动员比赛，如果要满足(1)每个选手必须和其他n-1个选手各赛一次；(2)每个选手一天只能参赛一次
	而且必须休息一天，求最少多少天能结束，那么有两种情况，(1)第一种情况是当选手数是2的k次方时，循环
	比赛最少是在2*(n-1)天内结束比赛；(2)第二种情况是当选手数在2的k-1次方和2的k次方中间时，其要比赛的
	天数是2*(2的k次方减1)。
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	float num;
	int count;
	int i, flag;
	int a2[12] = { 2,4,8,16,32,64,128,256,512,1024,2048,4096 };//代表临界的值，也就是2的幂
	printf("请输入运动员数：");
	scanf_s("%f", &num);
	for (i = 0; i < 12; i++)
	{

		if ((int)num == a2[i])
		{
			printf("这是第一种情况\n");
			flag = 1;
			break;
		}
	}
	if (i >= 12)
	{
		printf("这是第二种情况\n");
		flag = 2;
	}
	for (count = 1; num > 2.000000; count++)
	{
		num = num / 2;
	}
	double result = pow(2, count);
	printf("最少需要的天数为：%d\n", 2*((int)result - 1));
	system("pause");
	return 0;
}