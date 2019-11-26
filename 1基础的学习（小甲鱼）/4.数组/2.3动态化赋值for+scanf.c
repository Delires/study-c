/**
动态化赋值
       for循环＋scanf()语句
**/
#include <stdio.h>
void main()
{
    int i ,max,a[10];
    printf("intput ten number\n");


    for(i=0; i<=9; i++)    //for循环＋scanf() 就是动态化赋值
    {
        scanf("%d", &a[i]);
    }


    for(i=0; i<=9; i++)
    {
        printf("%d\t", a[i]);
    }
}
