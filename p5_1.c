#include <stdio.h>
#include <string.h>

//�����������߲��������֣������ڲ������ǿգ��������Ҳ���������

int main()
{
	char a[20] = {0};
	printf("��������ʽ:");
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
			if (a[i - 1] == '(' || a[i - 1] == ')' || a[i + 1] == '(' || a[i + 1] == '��')
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
		printf("������ʽ����ȷ��\n");
	}
	else
	{
		printf("������ʽ�Ǵ����\n");
	}
	printf("%s\n",a);
	system("pause");
	return 0;
}