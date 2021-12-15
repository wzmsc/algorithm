
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	float num;
	int count;
	int i,flag;
	int a2[12] = {2,4,8,16,32,64,128,256,512,1024,2048,4096};
	printf("请输入运动员数：");
	scanf_s("%f",&num);
	for (i=0;i<12;i++)
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
	for (count=1;num > 2.000000;count++)
	{
		num = num / 2;
	}
	double result = pow(2,count);
	printf("最少需要的天数为：%d\n",(int)result-1);
	system("pause");
	return 0;
}