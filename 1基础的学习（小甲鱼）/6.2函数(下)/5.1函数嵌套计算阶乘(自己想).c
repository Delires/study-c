/**
����Ƕ��
    Ƕ���Ƕ���һ������ʱ,�������ְ�����һ������
    ��������������,��main()�����ⶨ��

����׳�
s=(2^2)!+(3^2)!

˼·:��Ƕ�׵�ԭ��,һ����������ƽ��square
                   һ������׳�factorial(�׳�)
     �������ȵ���square���ٰ�square��ֵΪʵ�Σ�
           �ٵ���factorial���ٷ���square���ٷ���������
**/
#include <stdio.h>
int square(int p);
int factorial(int q); //��ǰ��������

void main()
{
    int a=2, b=0;
    for(a=2; a<=3; a++)
    {
       b=b+square(a);//������square����
    }
    printf("%d", b);
}

int square(int p) //����square����,��ʽҪ����������һ��
{
    int j, k;
    j = p * p;
    k = factorial(j); //square�����ֵ�����factorial����
    return k;  //���ص��Ǿ�factorial�����ֵ
               //k���ص�int�����������ٸ�a
}

int factorial(int q)//����factorial����,Ҫ����������һ��
{
    int l=1;
    for(q; q>0; q--)
    {
        l=l*q;
    }
    return l;  //��l��ֵ���ص������������ڸ�k
}





