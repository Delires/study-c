/***
���100��300�䲻�ܱ�3��������

% ���������

continue��䣬����������ֱ������������һ�����ܳ��ļ���
**/
#include <stdio.h>
void main()
{
    int i;
    for(i=100; i<=200; i++)
    {
        if(i%3 == 0)
        {
            break;//ԭ����continue����break������102ʱ����ȫ�������ѭ�����������100 101
        }
      printf("%d\t", i);
    }
}
/**
������ ����continue����
#include <stdio.h>
void main()
{
    int i;
    for(i=100; i<=300; i++)
    {
        if(i%3==0)
            printf("%d\t", i);
    }
}

**/
