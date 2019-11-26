/**
指针数组:即一个数组内的元素全为指针变量

一维指针数组定义形式: 类型名 *数组名 [数组长度]

二维数组指针形式:  类型名 (*数组名) [数组长度]

一维数组指针形式:  int a[]={};
                    int *p;
                    *p=a;
**/
#include <stdio.h>
void main()
{
    int a[5] = {1, 3, 5, 7, 9};  //定义一维数组
    int *name[5] = {&a[0], &a[1], &a[2], &a[3], &a[4]};
                            //定义指针数组,里面有5个指针,每个指针都对应一个元素
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d ", *name[i]);//把指针数组逐个打印出来
    }
    printf("\n\n");
}
