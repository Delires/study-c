/**
输入abc三个数 按大小输出
两辆比较再交换

定义指针变量有*，操作中没有*，指针变量只能存放指针
**/
#include <stdio.h>
void main()
{
    int *p1, *p2, *p3;//定义指针变量加*
    int a, b, c, l, m, n;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    scanf("%d %d %d", &a, &b, &c);

    if(a<b)
    {
      l=*p1;
      *p1=*p2;
      *p2=l;
    }
    if(a<c)
    {
        m=*p1;
        *p1=*p3;
        *p3=m;
    }
    if(b<c)
    {
        n=*p2;
        *p2=*p3;
        *p3=n;
    }
printf("%d %d %d", *p1, *p2, *p3 );
}
