/**
����׳�
s=(2^2)!+(3^2)!

˼·:��Ƕ�׵�ԭ��,һ����������ƽ��square
                   һ������׳�factorial(�׳�)
     �������ȵ���square���ٰ�square��ֵΪʵ�Σ�
           �ٵ���factorial���ٷ���square���ٷ���������
**/
#include <stdio.h>
int square(int p);   //ʵ��ƽ��
int factorial(int q);//ʵ�ֽ׳�
//c���Բ���Ƕ�׶��壬����Ҫ�����ⶨ���꣬�ٽ��е���

void main()
{
  int i;
  int s=0;
 #if(0)
 for(i=2; i<=3; i++)//��ѭ����ʾ�����
  {
      s= s+square(i);//����square����
  }
 #endif
 s = square(2) + square(3);
  printf("%d\n", s);
}

int square(int p) //����square����,i=p
{
    int k;
    int r;
    int factorial(int );//����factorial����
    k = p * p;
    r = factorial(k);
    return r;
}

int factorial(int q)//����factorial����,q=k
{
    int m=1;
    int i;
    for(i=1; i<=q; i++)
    {
        m=m*i;//m*=q
    }
    return m;
}
