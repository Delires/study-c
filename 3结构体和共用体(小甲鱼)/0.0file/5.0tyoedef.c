/**
typedef 类似于 宏定义#define
  typedef 是用来定义变量类型，给变量类型重新命名
  #define 是用来定义数据，给数据取一个新名字

typedef定义一般在主函数外

**/

#include <stdio.h>

typedef int u8; //给int命名为u8

typedef struct
{
    int num;
    char *name;
    float score;
} JIEGOUTI;    //给结构体命名为JIEGOUTI

int main(void)
{
    u8 a=10; //u8 a == int a
    int b=100;
    printf("a:%d\tb:%d\n", a, b);

    JIEGOUTI hengmengdi; //JIEGOUTI hengmengdi == struct hemengdi
    hengmengdi.num = 01;
    hengmengdi.name = "何梦迪";
    hengmengdi.score = 59.9;
    printf("number:%d\tname:%s\tscore:%f\n",hengmengdi.num, hengmengdi.name, hengmengdi.score);
}
