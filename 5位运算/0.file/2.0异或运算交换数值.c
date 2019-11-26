/**
异或^运算交换两个数的值
异或运算是可逆运算，任意两个数异或产生第三个数。然后再与第三个异或就会产生另外一个
     如 a^b=c c^a=b c^b=a
**/
#include <stdio.h>
int main(void)
{
    int a, b;
    a=20;
    b=40;
    printf("a=%d,b=%d\n",a,b);

    printf("用异或交换两个数的值，不需要中间变量\n");
    a = a^b;   //a变成第三个量
    b = b^a;   //第三个量与b异或是a
    a = a^b;   //第三个量与b(b=a)是b
    printf("a=%d,b=%d\n",a,b);

}
