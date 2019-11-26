/**
例题:判断一维数组a[10]={1,2,3,4,-1,-2,-3,-4,2,3}的元素
     大于0输出该值，小于0输出0

小甲鱼是直接打印在返回 我是先返回在打印
**/
#include <stdio.h>
int text(int n);//先声明函数，主函数使用，后面在定义

void main()
{
    int a[10]={1,2,3,4,-1,-2,-3,-4,2,3};
    int i;//用循环挨个判断
    for(i=0; i<=9; i++)
    {
        text(a[i]);//a[10]数组每个数用公式
        printf("\t");
    }
    printf("\n");//直接把打印出的数返回，所以这直接空格
}

int text(int n)//注意这没a[i]只有n
{
    if(n>0)
    {
        printf("%d", n);//因为返回的是打印结果,不是数,因此不需要return返回
    }
    else
    {
        printf("%d", 0);
    }
}
