/**
��һ������score������10���ɼ����Լ�дһ��average��ƽ���ɼ�

���������������ݣ�1.�β�ʵ�α�����������ͬ������
���������������൱�ڴ�������������

С�����Ƿ������ٴ�ӡ������ֱ�Ӵ�ӡ�ڷ���
**/
#include <stdio.h>    //  ����ط�������ٶ��У�ֻҪ��Ⱦ���
double average(double array[10]);//����Ϊ����˫������double
                                 //�������������������Ͷ�����ͬ
void main()
{
    double score[10]={77.5, 95.6, 88, 95.5, 45.6, 44, 68.5, 55, 88, 100};
    double result;
    result = average(score);
    printf("%5.3f", result);
}

double average(double array[10])//���庯��
{
    int i; //��ѭ����
    double z=0;
    for(i=0; i<10; i++)
    {
        z=z+array[i];
    }
    z=z/10;
    return z;
}




