/**
结构体初始化
    如果对结构体里的元素挨个赋值，会十分麻烦。所以有一种直接初始化的办法
    如： struct student
         {
           成员列表;
         } 变量名1={}, 变量名2={};
**/
#include <stdio.h>
int main(void)
{
    struct
    {
        int number;
        char *name; //只有用指针*，才能对字符串间接赋值
        char *sex;  //要么 *name 要么name[10]
        int age;
    } boy1={001, "caopengxiang", "man", 15}, boy2;

    boy2 = boy1;

    printf(" number=%d\n name=%s\n sex=%s\n age=%d\n", boy1.number, boy1.name, boy1.sex, boy1.age);
    printf("\n\n\n");
    printf(" number=%d\n name=%s\n sex=%s\n age=%d\n", boy2.number, boy2.name, boy2.sex, boy2.age);

    return 0;
}




