/**
static   ��̬��������ʱ��ϣ�����ú��ͷ�,�ͼ��ϴ洢����static

���������쾲̬�ֲ�������ֵ
 auto   ʹ�ñ�������Զ�����
 static ʹ�ñ�����ᱣ����һ��ֵ
**/
#include <stdio.h>

int f(int a)
{
    auto int b=0; //auto��̬�洢
    static int c=3;//static��̬�洢

    b = b + 1; //auto b ���Զ��ͷţ�����bһֱ��1
    c = c + 1; //static c �ᱣ����һ�ε�ֵ��c������1
    return (a+b+c);
}

void main()
{
  int l=2, i;//�ֲ�����
  //����a��ͬ��������Զ����κ���ĸ����a��ֵ�������庯�� int a

  for(i=0; i<3; i++)
  {
      printf("%d\n", f(l));
  }
}

/**
    b = b + 1; //auto b ���Զ����٣�����bһֱ��1
    c = c + 1; //static c �ᱣ����һ�ε�ֵ��c������1
    b=1 1 1
    c=4 5 3
**/




