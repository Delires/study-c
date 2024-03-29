/**
取char a右端开始的2~5位
①先把a右移两位，让那几个值到最右端
②设置一个低四位为1，其余为0的数
③两个数&运算取值

也可一步到位&0001 1111，但这样程序移植性不好
**/
#include <stdio.h>
int main(void)
{
    unsigned char b, a;
    printf("输入a:");
    scanf("%d", &a);

    a >>= 2;
    printf("a右移两位=%d\n", a);   //c语言不能打印二进制

    b = ~(~0<<4);   //~0=111111111 左移4位11110000  取反00001111
    printf("低四位为1的数%d\n",b);

    a &= b;
    printf("a低的2~5位=%d\n", a);
}
