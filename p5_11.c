#include<stdio.h>

int arr[6][6] = {    {0,0,0,0,0,0},
                     {0,10,11,10,4,7},
                     {0,13,10,10,8,5},
                     {0,5,9,7,7,4},
                     {0,15,12,10,11,5},
                     {0,10,11,8,8,4}      };    //ǰ����������������������

//tem,bestһ�������±��������ţ����ݴ�������
int tem[6] = { 0 }; //��ʱ����
int best[6] = { 0 }; //���Ž�Ĵ���   

int bestrecord = 0, temrecord = 0;//����maxЧ��Ĵ��棺bestrecord�����Ž⣬temrecord����ʱ


int search(int n) {    //�ڼ�����
    int i, j;
    for (i = 1; i <= 5; i++) { //�ڼ�������
        if (tem[i] == 0) 
        { //����˹���û�˸�
            tem[i] = n; //��������
            temrecord += arr[n][i]; //��¼���������
            if (n == 5) {   //����Ѿ�����5��ѡ��
                if (temrecord > bestrecord) {   //�����һ�ε���Ч�������һ�μ�¼��
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
    search(1);//�ӵ�һ���˿�ʼ
    for (i = 1; i <= 5; i++)
    {
        printf("����:%d ����:%d����Ա��Ч����%d\n", i, best[i],arr[best[i]][i]);
    }
    printf("total:%d\n", bestrecord);
    system("pause");
    return 0;
}