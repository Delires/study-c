/**
         *取值符
         &取地址符

**/

#include <stdio.h>
void main()
{
    int i=1000;   //直接访问
    int *pointer; //*不是取值符，而是表示pointer是指针
    pointer = &i; //&取值符，把i的地址取出来给pointer
    printf("%d", *pointer);//*取值符，取出pointer这个地址的值
}

/**
pointer 代表的是 i的地址的编号，而不是i的值
**/
