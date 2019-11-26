/***
写一个程序，允许输入一个吗，判断m是否为素数
素数的特点：除1和除本身能除尽其他的不行.用到%
if—else语句 循环不断除,一直到它开根的数,如果任何一个提前整除结束循环
/2/3不是偶数，被3除不尽
**/
#include <stdio.h>
#include <math.h>
void main()
{
    int i;
    printf("please intput number\n");
    scanf("%d", &i);
    if(0!=i%2 && 0!=i%3)
    {
        printf("this is prime\n");
    }
    else
    {
        printf("this is not\n");
    }
}
