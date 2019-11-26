#include <stdio.h>
void main()
{
    char a='f';
    char *pointer;
    pointer = &a;
    printf("%d", *pointer);
}
#if(0)
#include <stdio.h>
void main()
{
    int a=100;
    int *pointer;//指针基本型一致
    pointer = &a;
    printf("%c", *pointer);
}
#endif
/**
char int 能转换
char '字符' 打印%d 显示asc码
int   数字  打印%f 显示字母
**/
