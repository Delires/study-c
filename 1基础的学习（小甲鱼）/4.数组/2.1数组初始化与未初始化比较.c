/**
数组初始化与未初始化的比较
**/
#include <stdio.h>
void main()
{
    int i, a[5]={3,4,5}, b[5];
    //可多个数组同时定义,赋值不够的地方默认为0，a初始化了b没有
    printf("\n array a is:"); //array v.,陈列
    for(i=0; i<5; i++)
    {
        printf("%6d", a[i]); //%6d 规定字符长度,打印出来整齐
    }
    printf("\n array b is:");
    for(i=0; i<5; i++)
    {
        printf("%6d", b[i]); //两个循环依次运行结束,不是嵌套
    }
}
/**
打印出 a：3450
       b：0000 实际打印出b是乱码,乱码就是等待赋值的意思
**/
