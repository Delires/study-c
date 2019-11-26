/**
宏定义可以定义多个语句,在宏调用时,把这些程序又换到源程序内

strcat 字符串拼接函数
strcat(m,c); 把字符串c拼接到m上
函数库: #include <string.h>
**/
#include <stdio.h>
#include <string.h>

#define COPY(s1,s2,s3,s4) strcat(strcat(strcat(s1, s2),s3),s4)
                          //宏定义字符串多个语句

void main()
{
    char a[] = "TMD";
    char b[] = "shabi ";
    char c[] = "shi ";
    char d[] = "hemengdi!"; //b,c,d都拼到a后


    COPY(a,b,c,d);
    printf("\n\t%s\n\t%s\n\t%s\n\t%s",b, c, d, a);

}

