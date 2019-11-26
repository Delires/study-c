/**
结构体的地址 和 第一个成员的地址相同
因为结构体开始存储的地方 就是 结构体第一个成员开始存储的地方
**/

#include <stdio.h>
int main(void)
{
    struct student
    {
        int number;
        char *name;
        char sex;
        int age;
        char addres[30];
    } boy1;

    boy1.number =007;
    boy1.name = "jane";

    printf("Address of struct is %o:\n", &boy1);  //结构体的地址 和 第一个成员的地址相同
    printf("Address of num is %o:\n", &boy1.number);

     printf("Address of num is %o:\n", &boy1.sex); //和其他成员地址不同

    return 0;


}
