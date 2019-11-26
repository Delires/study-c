/**
typedef声明POINTER为指向函数的指针类型，该函数返回整型值
    typedef int (*POINTER)();
                         //第一个()表示函数是由指针指向,指向函数名
                         //第二个()是函数的(),如fund()的()
**/
#if(0)//小甲鱼
#include <stdio.h>

typedef void (*POINTER)();

void Found()
{
    printf("I love 何梦迪");
}

int main(void)
{
    POINTER p1; //void (*p1)();
    p1 = &Found;//Found()函数的函数名指向p1
                //函数和数组加不加取址都行，函数地址就是它自身，

    (p1)(); //调用函数，p1指向Found

    return 0;
}
#endif








#if(1)//自己写

#include <stdio.h>

typedef void (*p)(); //typedef定义一个指向函数的地址

void Fun();

int main(void)
{
    p p1;
    p1 = Fun;
    (p1)();

    return 0;
}

void Fun()
{
    printf("何梦迪是猪");
}
#endif
