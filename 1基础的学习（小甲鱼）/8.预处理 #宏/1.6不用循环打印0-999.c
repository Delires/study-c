/**
不用循环和递归打印0-999，用宏定义
**/

#include <stdio.h>

#define A(x) x;x;x;x;x;x;x;x;x;x;

int main(void)// 就是 void main()
{
    int n=0;
    A( A( A( printf("%d\t", n++) ) ) );
}
//打印 10*10*10个 printf("%d\t", n++)

//第一层A()打印10个 printf("%d\t", n++)
//第二层A( A() )打印10个 （打印10个 printf("%d\t", n++)）
