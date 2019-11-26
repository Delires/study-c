/**
此函数有一个关于指针不容易发现的错误，找出来

问题是*p++ 由于自右向左特性 编译器会误认为先自家1在*取值
**/
#include <stdio.h>
void main()
{
    int *p, i, a[10];//*p指针变量定义时前面加*
    p = a; //数组名代表第一个元素地址 a==&a[0]

    for(i=0; i<10; i++)//输入10个元素
    {
        scanf("%d ", p++);
    }
    printf("\n");

    for(i=0; i<10; i++, p++)//*p++
    {
        printf("%d", *p);
    }

}


#if(0)
        for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
#endif
