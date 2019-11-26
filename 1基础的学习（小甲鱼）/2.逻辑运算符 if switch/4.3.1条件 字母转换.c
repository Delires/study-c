/*
输入一个字符，判断是否是大写字母，如果是转换成小写字母。不是,直接输出
*/
#include <stdio.h>
void main()
{
    char ch;  //定义ch为字符型数，因为每个字符对应有asc码，所以必须定义成两个字母
    printf("input a character:");
    scanf("%c",&ch);
    ch = (ch>='A' && ch<='Z')?(ch+32):ch; //大写字母asc码+32=小写字母asc码
    //ch在不在AZ这个范围里，在ch+32，不再就是ch
    printf("transform a character: %c\n", ch);
}


/*
关于字符型char 要好好参悟
先看题目，从题目搞出来，在和标准对比
*/
