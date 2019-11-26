 /*
 switch开关分支语句的结构
     switch(表达式)
    {
    case常量表达式1:语句1;
    case常量表达式2:语句2;
    case常量表达式n:语句n;
    default        :语句n+1;
    }

搭配break语句，跳出用
 */
 #include <stdio.h>
 void main()
 {
     int a;
     printf("input integer number:");
     scanf("%d", &a); //&a 放到a地址
     switch(a)  //switch语句（a）是表达式值
                //switch表达式不仅写一个字母还可以写个表达式(与或非比较三目运算符等)
     {
         case 1:printf("Monday\n");break;   //1 是常量表达式
         case 2:printf("Tuesday\n");break;  //2是常量表达式
         case 3:printf("Wednesday\n");break;//3是常量表达式，就是一个数
         case 4:printf("Thursday\n");break;
         case 5:printf("Friday\n");break;
         case 6:printf("Saturday\n");break;
         case 7:printf("Sunday\n");break;
         default:printf("error\n");//default，常量表达式值都不同，默认输出这个
                                   //default后break可加可不加
     }
 }
