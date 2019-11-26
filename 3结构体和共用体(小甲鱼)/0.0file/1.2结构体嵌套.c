/**
什么是结构体嵌套？
    例如某结构体里有学号姓名成绩住址，而这个住址有分为省市区,所以又可自成一个嵌套

如何使用？
    先定义一个小结构体，再定义大结构体写成员时写 struct xxx

注意:在给结构体里的结构体赋值时，一定要“.”到底 即 大结构.小结构.成员

给字符串赋值，两种方法
   ①直接赋值 char name[10] = "asddasd";  //双引号不能少且必须直接赋值
   ②间接赋值 char *name[10];
                   name = "asddasd";  //*取值符，把name当成一个数，取他的值
**/
#include <stdio.h>
int main(void)
{
    struct data //定义小结构体
    {
        char *province; //province[10];
        char city[10];
        char town[10];   //字符串对应%s
    };

    struct
    {
        int number;
        char *name; //name[20];
        char *sex; //sex[5]
        struct data address; //成员为结构体，struct data是小结构 address是给再大结构里的小结构命名
    } boy1, boy2;
     //不能直接引用结构变量的名称，所以再后面命名结构变量

    boy1.number = 1;
    boy1.name = "cao";
    boy1.sex = "men";

    boy1.address.province = "ShannXi"; //赋值时一定要“.”到底 即 大结构.小结构.成员

    printf("intput city and town of this luck boy");
    scanf("%s", &boy1.address.city);
    scanf("%s", &boy1.address.town);

    printf("number=%d\nname=%s\n\sex=%s\n", boy1.number, boy1.name, boy1.sex);

    printf("province=%s\ncity=%s\ntown=%s\n", boy1.address.province, boy1.address.city, boy1.address.town);
                                      //赋值打印时一定要“.”到底 即 大结构.小结构.成员
    return 0;
}
