/**
����ĳ��ԭ�� ����register���ٶȱ�auto��
�������Ч�ʣ���register����

������staticһ�����Ƚ��ж�����Ч��(�ٶ�)
**/
#include <stdio.h>

int fac(int n)
{
    static int f = 1;//1, 1*2, 2*3, 6*4
    f = f * n;
    //����f��static��̬����������ÿ�ζ�����һ��i�׳������ֵ
    return f; //��f���ֵ����
}

void main()
{
   register int i;
   //��register����static Ч�ʸ���
   for(i=1; i<10; i++)
   {
       printf("%d!=%d\n", i, fac(i)); //��i����int nȥ����
   }
}
