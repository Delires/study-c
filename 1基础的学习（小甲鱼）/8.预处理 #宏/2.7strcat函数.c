/**
函数名: strcat
功  能: 字符串拼接函数
用  法: strcat(m,c); 把字符串m,c粘贴在一起
函数库: #include <string.h>
**/
#include <stdio.h>
#include <string.h>
void main()
{
    char sb[25];
    char *a = "hemengdi";
    char *b = "ai";
    char *c = "fapiqi";

    strcpy(sb, a); //strcpy串拷贝,即从头开始复制
    strcat(sb, b);
    strcat(sb, c);

    printf("%s", sb);

}
