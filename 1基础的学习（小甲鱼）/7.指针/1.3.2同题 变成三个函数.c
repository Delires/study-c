/**
д�����������ı����ʽ ������ exchange���� swap����
a,b,c����*p1 *p2 *p3��ʾ
**/
#include <stdio.h>
int exchange(int *q1, int *q2, int *q3);
void swap(int *m, int *n);//������������
int z;//����ֵ��ǰ����

void main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c; //ָ�����ֻ�ܴ��ָ��(��ַ) &����

    printf("%d %d %d\n", a, b, c);
    z = exchange(p1, p2, p3);//����ָ�����ʱǰͷд*,����ʱ��д
    printf("%d %d %d\n", *p1, *p2, *p3);//��������p1p2p3ȡֵ��ӡ����
}

int exchange(int *q1, int *q2, int *q3)//���庯��exchange
//��Ϊ������ int*q1, �����ݹ�������p1, ���Ծ���*p1,�����ǵ�ַȡֵ������
//ͬ������ int q1, �����ݹ�������p1, ���Ծ���p1, �����ǵ�ַ������
{
    if(*q1 < *q2)
    {
        swap(q1, q2);
    }
    if(*q1 < *q3)  //if(��������)
    {
        swap(q1, q3);//��Ϊ������ int*m, �����ݹ�������q1, ���Ծ���*q1,�����ǵ�ַȡֵ������
    }                //���swap(*q1,*q3) ���ݹ�ȥ�ͳ���**m
    if(*q2 < *q3)
    {
        swap(q2, q3);
    }
    return z;
}

void swap(int *m, int *n)//q1���ݹ����պ���*q1
{
    int o;
    o = *m;
    *m = *n;
    *n = o;
}
/**
ע�� ��������ʱ ��*p
    �����ִ��ݹ�ȥ��Ӧ����q
    ������ݹ�ȥ��*q,��ͻ��Ϊ**q
**/

