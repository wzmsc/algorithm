#include <stdio.h>

int main(){
		int wei[9]; //ÿһλ
		int flag;
		int i, num, cnt = 0, n, sum = 0;//ͳ�Ʋ���ȺͲ�Ϊ0������

		for (i = 123456789; i <= 987654321; i++) 
		{
			num = i; //��ʼ��num
			flag = 0;//�����ж��Ƿ���������
			// ����ÿһλ
			for (int j = 0; j < 9; j++) 
			{
				wei[j] = num % 10;
				num = num / 10;
			}
			// �ж���0�����
			for (int k = 0; k < 9; k++) 
			{
				if (wei[k] == 0) {
					flag = 1;
					break;
				}
				for (int m = k + 1; m < 9; m++) 
				{
					if (wei[k] == wei[m]) 
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1) 
				{
					break;
				}
			}
			//������0��ÿλ������ȣ������ж�ǰ��λ��������
			if (flag == 0) 
			{
				cnt = 0;//������Ϊ0
				sum = wei[8];
				for (n = 8; n >= 1; n--) 
				{
					sum = sum * 10 + wei[n - 1];
					if (sum % (10 - n) == 0) 
					{
						cnt++; //��������
					}
				}
				if (cnt == 8) 
				{       //ǰ2λ��2������ǰ9λ��9������8��
					printf("%d\n",i); //�����õ�i�ˣ�֮ǰ��num��ִ��
				}
			}
		}
		printf("����\n");
		system("pause");
}