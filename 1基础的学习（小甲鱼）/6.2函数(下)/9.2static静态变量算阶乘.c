/**
static ��̬��������� �´ε���ʱ������һ�ε�ֵ

������ص���׳�
**/
#include <stdio.h>

int fac(int n)
{
    static int f = 1;//1, 1*2, 2*3, 6*4
                     //����fΪ��̬����1
                     //��̬��������m����ֵ��Ĭ��Ϊ0
    f = f * n;
    //����f��static��̬����������ÿ�ζ�����һ��i�׳������ֵ
    return f; //��f���ֵ����
}

void main()
{
   int i;
   for(i=1; i<10; i++)
   {
       printf("%d!=%d\n", i, fac(i)); //��i����int nȥ����
   }
}
/**
static f
ÿ�ε��ú�,f������һ�ε�ֵ f=1 f=1 f=2 f=6 f=24
**/

#if(0)
#include <stdio.h>
int fuck(int a);

void main()
{
    int i=1;
    for(i=1; i<10; i++)
    {
        printf("%d!=%d\n", i, fuck(i));
    }

}

int fuck(int a)
{
    static m=1;//��̬��������m����ֵ��Ĭ��Ϊ0
    m = m * a; //1, 1*2, 2*3, 6*4
    return m;
}

#endif)
