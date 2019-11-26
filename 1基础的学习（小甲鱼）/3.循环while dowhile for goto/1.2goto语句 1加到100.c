/*************
用 goto语句 和 if语句构成循环 算1到100的和

格式为    goto 语句标号;
          语句标号:xxxxx;
************/
#include <stdio.h>
void main()
{
    int i, sum=0;   //定义sum为0
    i=1;
loop: if(i<=100)    //loop是标识符
     {
       sum=sum+i;   //sum每加一次都会赋值给新的sum,sum在不断变化，i不断加1
       i++;
       goto loop;   //执行完在回到loop 条件不成立时输出
     }
printf("%d\n", sum);
}
