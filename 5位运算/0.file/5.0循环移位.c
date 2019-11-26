/**
移位溢出的值，自动补到前面或后面
**/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned char a,b,c;
    int n;

    printf("输入循环右移的数字：");
    scanf("%d", &a);

    printf("输入右移的位数")
    scanf("%d", &n);

    b = a <<( sizeof(char)*8-n ); //把a左移(8-n)位
    c = a >>n;                    //把a右移n位
    c = c | b;                    //二者一与，1起作用
    printf("结果是：%c\n");
    system("pause");
}
