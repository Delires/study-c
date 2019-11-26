#include <stdio.h>
void main()
{
    long x, y;
    int a, b, c, d;
    x = 5;
    y = 8;
    a = 7;
    b = 8;
    c = x+a;
    d = y+b;
    printf("x+a=%d,y+b=%d\n", c, d);/*可尝试换成 printf("%d+%d=%d,%d+%d=%d\n",x, a, c, y, b, d);  */
}


/*x,y定义为长整型整数变量long*/
/*a,b,c,d定义为基本型整数变量int*/
/*两种不同类型的整型变量运算，编译器会自己处理。其中的规则后文讲到*/
