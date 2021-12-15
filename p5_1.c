#include <stdio.h>
#include <string.h>

//括号左右两边不能有数字；括号内部不能是空；符号左右不能是括号

int main()
{
	char a[20] = {0};
	printf("请输入表达式:");
	scanf_s("%s", a,19);
	int len = strlen(a);
	int lag = 0;
//	printf("%d\n",len);
	for (int i = 0; i < len; i++)
	{
		if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
		{
			if (i == 0)
			{
				lag = 1;
				break;
			}
			if (i == len - 1)
			{
				lag = 1;
				break;
			}
			if (a[i - 1] == '(' || a[i - 1] == ')' || a[i + 1] == '(' || a[i + 1] == '）')
			{
				lag = 1;
				break;
			}
		}
		else if (a[i]==')'||a[i]=='(')
		{
			if (i != 0 && (a[i-1]==0|| a[i - 1] == 1|| a[i - 1] == 2 || a[i - 1] == 3 || a[i - 1] == 4 || a[i - 1] == 5 || a[i - 1] == 6 || a[i - 1] == 7 || a[i - 1] == 8 || a[i - 1] == 9 ))
			{
				lag = 1;
				break;
			}
			if (i != (len-1) && (a[i + 1] == 0 || a[i + 1] == 1 || a[i + 1] == 2 || a[i + 1] == 3 || a[i + 1] == 4 || a[i + 1] == 5 || a[i + 1] == 6 || a[i + 1] == 7 || a[i + 1] == 8 || a[i + 1] == 9))
			{
				lag = 1;
				break;
			}
			if (a[i] == '('&&a[i+1]==' ')
			{
				lag = 1;
				break;
			}
		}
	}
	if (lag == 0)
	{
		printf("这个表达式是正确的\n");
	}
	else
	{
		printf("这个表达式是错误的\n");
	}
	printf("%s\n",a);
	system("pause");
	return 0;
}