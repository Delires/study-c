/**
*取值 &取址
指针赋值不能是结构体，而是声明的结构体变量

**/
#include <stdio.h>
struct stu
{
    int num;
    char *name;
    char sex;
    float score;
}boy1={102, "fish", 'M', 78.5};  //“fish”是字符串 赋值需要*
                                 //‘M’是字符  可直接赋值

int main(void)
{
    struct stu *pstu; //pstu是个放地址的，*取地址里的值，定义里面的值是个结构体
    pstu = &boy1;  //boy1的地址给了pstu，再去pstu的值

    printf("number=%d\nname=%s\n", boy1.num, boy1.name);
    printf("sex=%c\nscore=%f\n\n", boy1.sex, boy1.score);
                             //常规方法取结构体的值
    printf("number=%d\nname=%s\n", (*pstu).num, (*pstu).name);
    printf("sex=%c\nscore=%f\n\n", (*pstu).sex, (*pstu).score);
                             //指针方法取结构体的值
    printf("number=%d\nname=%s\n", pstu->num, pstu->name);
    printf("sex=%c\nscore=%f\n\n", pstu->sex, pstu->score);
                             //位操作方法取结构体的值


}
