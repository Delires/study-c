/**
typedef与#define功能类似，但是完全不同的
区别1:
     #define后面不用加分号，因为它是预处理命令是在编译器前执行的。不是语句
     typedef后要加分号，因为他是语句在编译时执行的

区别2：书写不同
      #define 名字 被定义者 (名在前)
      typedef 定义者 名字   (名在后)

区别3:
     #define知识机械的替换
     typedef是给一道命令起了别名
**/
#include <stdio.h>

#define p2 int*
typedef int* p1;

int main(void)
{
    p2 a,b;  //#define知识简单替换，所以a是指针，p是整型
    printf("%d\t%d\n", a, b);

    p1 c,d;  //ypedef是给一道命令起了别名,所以c，d都是指针
    printf("%d\t%d\n", c, d);

    return 0;

}
