/**
小甲鱼巧妙在
用     指针变量p作为中间变量
在交换 指针变量p1p2，用交换地址来达到交换值得目的
**/
#include <stdio.h>
void main()
{
    int a, b, *p, *p1, *p2; //定义指针变量前要有*

    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;  //指针变量只能放地址

    if(a<b)
    {
        p=p2;
        p2=p1;
        p1=p; //用交换地址来达到交换值得目的
    }

    printf("%d %d\n", a, b);
    printf("max=%d, min=%d\n", *p1, *p2);
}
