/**
用 1.下标法 a[i]
   2.数组名计算地址 *(a+i) a==&a[0] *(a) == a[0]
   3.指针法 p=a[0] *(p+i)
三种方法，输出数组全部元素
**/
#include <stdio.h>
void main()
{
    int a[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i;

    for(i=0; i<=9; i++) //1.下标法输出所有元素
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");


    for(i=0; i<=9; i++)//2.数组名发   *(a)==*(&a[0])
    {
        printf("%d ", *(a+i));
    }
    printf("\n\n");


    int *p;
    p = &a[0];//或 p=a;数组名a就是第一个元素的地址 a==&a[0]
    for(i=0; i<=9; i++)//3.指针法  p=&a[0]  *(p+i)
    {
        printf("%d ", *(p+i));
    }
    printf("\n\n");

}
