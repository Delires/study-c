/**
2. #ifndef 标识符     没定义标识符,就执行程序1去定义,否则就执行程序2
   程序1
   #else
   程序2
   #endif
**/
#include <stdio.h>

#define CORRECT "caopengxiang"

void main()
{
    char str[40];
    int cmp(char *str1, char *str2);    //声明一个对两个字符串操作的函数

    printf("please intput name of you best love man:\n");
    scanf("%s", &str);

#ifndef CORRECT//如果没有定义CORRECT 就执行程序再定义一边
               //如果删除开头的 #define CORRECT "caopengxiang" 这段就起作用
 #define CORRECT "caopengxiang"//程序段
#endif


     if( cmp(str, CORRECT) == 0 )
     {
         printf("\n\n\n\n you are smart girl \n\n\n\n");
     }
     else
     {
         printf("\n\n\n\n you are sun of bitch, fool shit \n\n\n\n");
     }
}

int cmp(char *str1, char *str2) //定义函数,比较字符
{
    int i=0, j=0;
    while (1)
    {
        i++;
        j++;
        if(str2[j] == str1[i])
        {
            return 0;
        }
        else
        {
            return 10;
        }
    }
}

