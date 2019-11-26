/*************
用 while语句 和 if语句构成循环 算1到100的和

while语句形式为
           while(表达式)语句;
************/
#include <stdio.h>
void main()
{
    int i, sum=0;   //sum=0 sum从零开始
    i=1;            //i=1 i从1开始
    while(i<=100)
    {
        sum=sum+i; //i=1,2,3,4,5,6,7,8,9,10.......
        i++;       //sum=1+2+3+4+5+6+7+8+9+10+....
    }              //小心死循环
    printf("%d", sum);
}
