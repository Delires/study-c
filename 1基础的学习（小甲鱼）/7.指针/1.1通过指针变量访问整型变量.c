/**
定义指针变量必须加* 如*pointer
             必须定义基本型 变量是int指针也得是int

先声明变量，才能使用指针
             *取值符
             &取地址符

指针     即 数据存放的地址
指针变量 即 存放数据地址的量

指针运算说白了就是数据存放地址的运算，
              先用&取出数据的地址
              再通过地址和*取地址的值
**/
#include <stdio.h>
void main()
{
    int a, b;
    int *pointer_1, *pointer_2;//用*声明pointer是指针
                               //基本型一直
    a = 100;
    b = 10;//a,b直接赋值

    pointer_1 = &a;
    pointer_2 = &b;//&取地址符，把ab的指针赋给指针变量

    printf("%d,%d\n", a, b); //打印ab值
    printf("%d,%d\n", *pointer_1, *pointer_2);
                    //*取值符， 取出pointer地址所对应的值
}

