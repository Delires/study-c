#include <stdio.h>

#define CORRECT "caopengxiang"

void main()
{
    char str[40];
    int cmp(char *str1, char *str2);    //声明一个对两个字符串操作的函数

    printf("please intput name of you best love man:\n");
    scanf("%s", &str);

#ifndef CORRECT//如果没有定义CORRECT 就执行程序再定义一边
 #define CORRECT "caopengxiang"//程序段
#endif
     if( cmp(str, CORRECT) == 0 )
     {
         printf("\n you are smart girl \n");
     }
     else
     {
         printf("\n you are sun of bitch, fool shit \n");
     }
}

int cmp(char *str1, char *str2) //定义函数,比较字符
{
    int i=0, j=0;
    while(str1[i])
    {
        while( str2[i]=str1[j])
        {
            i++;
            j++;
            if( !str2[j])
            {
                return 0;
            }
        }
        j = 0;
        i++;
    }
    return -1;
}
