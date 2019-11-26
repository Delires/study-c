/**
定义一个函数，来实现字符串的复制。 指针法 和 下标法

把a字符串复制到b的同时也覆盖字符串(直接复制过去就自动覆盖了)
此题用指针法*a
**/
#include <stdio.h>
void duplicate(char *from, char *to);//声明指针函数

void main()
{
   char *a = "I am a teacher";
   char *b = "You are my student";//*a = a[]  *a就是地址a的取值为
#if(0)
   char *b 改成 char b[] 就可以编译成功
#endif

   printf("%s\n", a);
   printf("%s\n", b);
   //此处 a == *a

   duplicate(a, b);

   printf("%s\n", a);
   printf("%s\n", b);
}

void duplicate(char *from, char *to)
{
    for(; *from != '\0'; from++, to++)//*from from的值
    {
        *to = *from;
    }
    *to = '\0';//to++先加1再跳出for语句，跳出的这个赋值结束
}
/**
出错，为什么？
两种形式在内存中的赋值形式不同
char b[] 是 把每个字母的值都赋给这个数组 动态变量auto
char *b  是单纯的指向有这个内容的地址    静态变量static

char *b是静态变量是不能改变的，而函数却试图改变所以会报错，所以改成char b[]
**/

