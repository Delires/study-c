/**
什么是结构体变量？
    在实际定义中，比如年龄身高性别成绩，这就是一个人的信息和。我们把这些所有信息可共集合为一个结构体，便于操作

定义结构体形式:
    struct 结构名
    {
      成员列表     //成员列表为：类型说明符 成员名;
    };

定义结构体类型变量
    先声明结构体类型再定义变量名
    如：
       struct 结构名
       {
         成员列表
       }变量名1,变量名2;
**/
#include <stdio.h>
int main(void) //定义结构体变量
{
    struct student
    {
        int num;       //4t
        char name[20]; //20t
        char sex;      //1t
        int age;       //4t
        float score;   //4t
        char addr[30]; //30t
    }student1,student2;

//理论上，student1,student2和studentt是同一类型结构体,则他们都应占67type
//但事实并非如此,用sizeof测试下,不同的原因是编译器会自动优化
    printf("%d", sizeof(student1));

    return 0;
}










