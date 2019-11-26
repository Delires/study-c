/**
指针版
int research(int *x, int n);
用冒泡法把数按从小到大排列:外层控制比较次数，内层控制哪个比较
                            两两逐渐比较，小的就往后放。一直比下去小的就在最后
**/
#include <stdio.h>
int reasearch(int *x, int n);
int z;

void main()
{
    int a[10]={25,45,36,98,58,51,35,48,86,57};
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i)); //a==&a[0]  *a==a[0]
    }
    printf("\n");

    reasearch(a, 10);
    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");

    printf("max=%d min=%d", *(a), *(a+9));//*(a+9)=a[9]  *取值符
}

int reasearch(int *x, int n)
{
    int i, j, o;//用冒泡法排列数
    for(i=0; i<10; i++)//外层控制比较次数
    {
        for(j=0; j<9-i; j++)//内层控制第几个比较 ，小的扔后头
        {
            if(*(x+j)<*(x+j+1))
            {
                o = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = o;
            }

        }
    }
    return z;
}
