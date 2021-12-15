#include<stdio.h>

int arr[6][6] = {    {0,0,0,0,0,0},
                     {0,10,11,10,4,7},
                     {0,13,10,10,8,5},
                     {0,5,9,7,7,4},
                     {0,15,12,10,11,5},
                     {0,10,11,8,8,4}      };    //前面代表人名，后面代表工作量

//tem,best一样都是下标代表工作序号，内容代表工作者
int tem[6] = { 0 }; //临时储存
int best[6] = { 0 }; //最优解的储存   

int bestrecord = 0, temrecord = 0;//工作max效益的储存：bestrecord是最优解，temrecord是临时


int search(int n) {    //第几个人
    int i, j;
    for (i = 1; i <= 5; i++) { //第几个工作
        if (tem[i] == 0) 
        { //如果此工作没人干
            tem[i] = n; //交给此人
            temrecord += arr[n][i]; //记录工作总情况
            if (n == 5) {   //如果已经有了5个选择
                if (temrecord > bestrecord) {   //如果这一次的总效益大于上一次记录的
                    bestrecord = temrecord;
                    for (j = 1; j <= 5; j++)
                        best[j] = tem[j];
                }
            }
            else {
                search(n + 1);
            }
            tem[i] = 0;
            temrecord -= arr[n][i];
        }
    }

}
int main() {
    int i;
    search(1);//从第一个人开始
    for (i = 1; i <= 5; i++)
    {
        printf("工作:%d 给了:%d号人员，效益是%d\n", i, best[i],arr[best[i]][i]);
    }
    printf("total:%d\n", bestrecord);
    system("pause");
    return 0;
}