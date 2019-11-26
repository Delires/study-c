/**
  typedef 是用来定义变量类型，给变量类型命名

  同时还可以声明 整型数组类型
                  字符指针类型
**/

#include <stdio.h>

typedef int NUM[100]; //typedef声明一个NUM整型数组

int main(void)
{
    printf("%d", sizeof(NUM));
    }
