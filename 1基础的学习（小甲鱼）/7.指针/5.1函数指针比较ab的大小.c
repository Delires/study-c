/**
ԭ������ͨ������һ���������Ƚ�ab�Ĵ�С
����ͨ�����庯����ָ�����Ƚ�ab�Ĵ�С

�������ڱ���ʱ�ͱ�����һ����ڵ�ַ,�˵�ַ���Ǻ�����ָ��
**/
#include <stdio.h>
int max(int x, int y)//�Ѻ���������ǰͷ����,��Ϊ�������Ǵ������¿�,����ʡȥ����
{
    int z;
    if(x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;//��z���ֵ���أ����Ƿ��ص�z
             //������ض���������Ͳ�д�������
}

#if(0) //�궨�壬Ԥ��������.�൱��һ������,�Ӷ����������Ķδ���
//��ͨ��
void main()
{
    int a, b, c;

    printf("please intput two numbers:\n");
    scanf("%d %d", &a, &b);

    c = max(a, b);
    printf("a=%d b=%d max=%d", a, b, c);
}
#endif

#if(1)// if(0)���Ͽ���  if(1)�򿪿���
//ָ�뷨
void main()
{
  int (*p)(); //���庯��ָ��,*�Ա���
  int a, b, c;

  p = &max;    //�Ѻ���ָ��(��ڵ�ַ)��ֵ ���� p
  scanf("%d %d", &a, &b);

  c = (*p)(a, b); //*p��ȡp��ַ���ĺ���
  printf("a=%d b=%d max=%d", a, b, c);
}
#endif
