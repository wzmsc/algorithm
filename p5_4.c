#include <stdio.h>

int main(){
		int wei[9]; //每一位
		int flag;
		int i, num, cnt = 0, n, sum = 0;//统计不相等和不为0的数量

		for (i = 123456789; i <= 987654321; i++) 
		{
			num = i; //初始化num
			flag = 0;//用于判断是否满足条件
			// 计算每一位
			for (int j = 0; j < 9; j++) 
			{
				wei[j] = num % 10;
				num = num / 10;
			}
			// 判断有0或相等
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
			//满足无0和每位都不相等，继续判断前几位被几整除
			if (flag == 0) 
			{
				cnt = 0;//计数置为0
				sum = wei[8];
				for (n = 8; n >= 1; n--) 
				{
					sum = sum * 10 + wei[n - 1];
					if (sum % (10 - n) == 0) 
					{
						cnt++; //计数增加
					}
				}
				if (cnt == 8) 
				{       //前2位被2整除到前9位被9整除有8个
					printf("%d\n",i); //这里用到i了，之前用num来执行
				}
			}
		}
		printf("结束\n");
		system("pause");
}