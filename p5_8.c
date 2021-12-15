#include <stdio.h>
#include <stdlib.h>
#define  random(x)    (rand()%x)

int judge(int a[],int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[100];
    int i, j, n;
    printf("input the number of coins:");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("%d", a[i] = 0);		//令硬币为正面，设为0，反面为1
    }
    printf("\n");
    while (1)
    {
        for(i=0;i<5;i++)
        {
            int j = random(n);
            if (a[j] == 0)
            {
                a[j] = 1;
            }
            else if(a[j] == 1)
            {
                a[j] = 0;
            }
        }
        for (int k = 0; k < n; k++)
        {
            printf("%d",a[k]);
        }
        printf("\n");
        if (judge(a, n))
        {
            break;
        }
    }
    system("pause");
    return 0;

}
