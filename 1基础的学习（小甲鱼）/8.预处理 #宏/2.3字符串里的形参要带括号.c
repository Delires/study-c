/**
���κ궨��: #define ����(�β�) �ַ���
      ����: ����(ʵ��);

�ַ����ڵġ��βΡ�ͨ��Ҫ������ ��:(y)*(y)
**/
#include <stdio.h>

#define SQ(y) (y)*(y)//ȥ������y*y����,����*+���ȼ���ͬ�����

void main()
{
    int a, sq;
    scanf("%d", &a);

    sq = SQ(a+1); //sq==SQ(a+1)=(a+1)*(a+1)
                  //ȥ���� sq=a+1*a+1

    printf("%d\n", sq);
}
