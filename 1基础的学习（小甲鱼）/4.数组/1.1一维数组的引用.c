/**
数组定义：类型说明符 数组名 [常量表达式]
数组引用：数组名 [下标]
  如 int a [10];
     t = a [6];
***/
#include <stdio.h>
void main()
{
    int i, a[10000]; //多个数组可以一起定义
    for(i=0; i<=9999; i++)//数组是从a[0]开始的到a[n-1]
    {
        a[i]=i;  //赋值语句
                    //数组定义必须为固定值,但提取可以为变量
    }
    for(i=9999; i>=0; i--)//最少位a[0] 最大为a[9]
    {
        printf("%d\t ", a[i]);
    }
}

/**
for的嵌套：从外到内,内实现完了,外再递增,在把那内实现完,外再递增
此程序不是for的嵌套而是由两个for组成
    先执行第一个for,给数组a的元素赋值(初始化)
    第一个for赋值完了,在第二个for把数  倒着打印出来
**/
