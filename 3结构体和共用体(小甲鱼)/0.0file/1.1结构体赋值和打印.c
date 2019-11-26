/**
结构体的赋值和打印
    不能对整个结构体赋值或打印,只能用“.”如 结构体名.成员列表 对每个成员赋值
    但可以把一个结构体直接复制给另一个结构体
**/
#include <stdio.h>
int main(void)
{
    struct student
    {
        int number;
        char name[20];
        char sex[5];
        int age;
        char addres[30];
    }student1, student2;
         //不能直接引用结构变量的名称，所以再后面命名结构变量

    student1.number = 1;
    printf("intput name and sex:");
    scanf("%s", &student1.name);
    scanf("%s", &student1.sex);  //一定切记，是 结构名.成员列表进行操作

    student2 = student1;  //但可以直接把一个结构体赋值给另一个

    printf("number: %d\n", student2.number);
    printf("name: %s\n", student2.name);
    printf("sex: %s\n", student2.sex);//一定是 结构名.成员列表 进行操作
     //字符串的打印是%S！！！

     return 0;


}
