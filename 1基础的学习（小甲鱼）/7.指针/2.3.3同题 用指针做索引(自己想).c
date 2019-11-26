/**
a[10]={3,7,9,11,0,6,7,5,4,2}
将数组a的数按反方向存放

用指针做索引,原来是a[i] 现在是*(p+i) 或*(a+i)
**/
#include <stdio.h>
int rever(int *x, int n); //因为数组传过去是地址，*地址就是值
                          //n是数组宽度
int z;//全局变量返回值
void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    printf("the combine is array:\n");
    for(i=0; i<=9; i++)
    {
        printf("%d ", *(a+i)); //a==&a[0] *a==a[0]
    }
    printf("\n");

    z = rever(a, 10);//带函数只用带数组名
    printf("the combine is reverse:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", *(a+i));
    }
}
int rever(int *x, int n)//定义函数
{
    int o, i;
    for(i=0; i<=4; i++)//i<4 前五个后五个互相换
    {
        o = *(x+i);//*取值符 o=x[i]
        *(x+i) = *(x+9-i);
        *(x+9-i) = o;
    }
}

