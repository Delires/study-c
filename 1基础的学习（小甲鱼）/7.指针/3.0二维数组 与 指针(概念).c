/**
一维数组 表示地址    a       &a[0]        第一个元素的地址   *(a) a[0]    第一个元素的值

二维数组 表示地址  *(a)       &a[0]       0行0列元素的地址   *(*(a))      0行0列元素的值
                    *(a)+1     &a[0][1]    0行1列元素的地址
                    *(a+1)     &a[1][0]    1行0列元素的地址
                    *(a+1)+1   &a[1][1]    1行1列元素的地址   *(*(a+1)+1)  1行1列元素的值

            即*(a)只表示行,再加一个数+1才表示列，从第0行0列开始

结论:
对二维数组来说  a=*a=*(a)=&a=&a[0]   单* 或 单&     都是取地址
                *(*a)=*(&a)=*(&a[0])  双* 或 *和&    才是取值
                ()+1 括号外加数字才是 列
                     不带括号加数字是 行
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    printf("        a=%d\n", a);          //a是0行首地址
    printf("       *a=%d\n", *a);         //*a是0行元素地址
    printf("     a[0]=%d\n", a[0]);       //a[0]是0行元素首地址
    printf("    &a[0]=%d\n", &a[0]);      //&a[0]是0行0列元素地址
    printf(" &a[0][0]=%d\n", &a[0][0]);   //&a[0][0]是0行0列元素地址
    printf("      a+1=%d\n", a+1);        //a+1是1行元素地址
    printf("   *(a+1)=%d\n", *(a+1));     //*(a+1)是1行元素地址
    printf("*(*(a+1))=%d\n", *(*(a+1)));  //*(*(a+1))是1行0列元素值
    printf("     *(a)=%d\n", *(a));
}
