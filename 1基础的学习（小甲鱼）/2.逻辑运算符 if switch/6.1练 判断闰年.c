/*
输入一个年份判断是否为闰年
先从数学入手，如果是闰年应该 能被4除尽 和 且同时不能被100整除
牵扯到除尽，所以用%符号。8%2=0 100%33=1
*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("input an year\n");
    scanf("%d", &a);
    b=a%4;
    c=a%100;//%符号，a%b如果有余数显示余数，没余数显示0
    if(b==0&&c!=0) //用比较符号==!= 不是赋值符=
                   //b是0且c不是0 &&同时满足但不能赋值 m=b&&c是错的
    {
        printf("This is Leap yeaar");
    }
    else
    {
        printf("This is not");
    }
}

/*
注意区分 比较符== 和 赋值符=
*/
