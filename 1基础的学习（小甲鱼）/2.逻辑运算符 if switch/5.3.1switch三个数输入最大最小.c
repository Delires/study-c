/*
switc语句
输入三个整数，输出最大数和最小数
因为要牵扯比较，所以一定要有if-else判断语句
*/
#include <stdio.h>
void main()
{
    int a, b, c, max, min; //因为要找出最大和最小，所以也要定义max和min
    printf("intput three numbers:");
    scanf("%d%d%d", &a, &b, &c);  //整型int对应%d 浮点型float对应%f
    if(a>b)   //if(表达式){语句1}else{语句2}
    {         //先用ab作比较
        max=a;
        min=b;
    }
    else
    {
         max=b;
        min=a;
    }
    if(max<c)//再用c和max min作比较
    {
        max=c;
    }
    else          //else语句里在嵌套一个if语句
        if(c<min) //if语句，如果if表达式成立就执行语句，不成立忽略
    {
        min=c;
    }
    printf("min=%d\nmax=%d\n", min, max);
}
