/**
��һ������score������10���ɼ����Լ�дһ��average��ƽ���ɼ�

���������������ݣ�1.�β�ʵ�α�����������ͬ������
���������������൱�ڴ�������������

**/
#include <stdio.h>
void average(int b[10]);

void main()
{
    int i;
    int score[10];//�����ȶ������鳤��
    for (i=0; i<10; i++)
    {
        scanf("%d,", &score[i]);
    }

   average(score);//����������������������������
}

void average(int b[10])//����������ͬ������������
{
 int i=0;
 float sum=0;
 for(i=0; i<10; i++)
 {
     sum=sum+ b[i];//���� sum=sum+i
 }
 printf("%f", sum/10);
}


