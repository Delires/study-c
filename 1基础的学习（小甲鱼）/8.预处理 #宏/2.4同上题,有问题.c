/**
�궨����൱��ֱ���滻,����Ҫע���������ȼ�����,�ܴ����žͶ��
**/
#include <stdio.h>

#define SQ(y) (y)*(y)

void main()
{
    int a, sq;
    scanf("%d", &a);

    sq = 160 / SQ(a+1);//���ȼ� SQ(a+1)=(a+1)*(a+1)
                       //     160/(a+1)*(a+1)����û��

    printf("%d\n", sq);
}
