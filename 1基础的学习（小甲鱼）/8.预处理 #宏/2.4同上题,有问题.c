/**
宏定义就相当于直接替换,所以要注意运算优先级问题,能带括号就多带
**/
#include <stdio.h>

#define SQ(y) (y)*(y)

void main()
{
    int a, sq;
    scanf("%d", &a);

    sq = 160 / SQ(a+1);//优先级 SQ(a+1)=(a+1)*(a+1)
                       //     160/(a+1)*(a+1)等于没变

    printf("%d\n", sq);
}
