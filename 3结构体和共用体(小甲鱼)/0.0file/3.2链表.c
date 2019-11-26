/**
链表≈数组，数组不能动态定义长度而链表可以

链表的组成：
    链表由头指针和节点构成
    头指针:存放一个地址，该地址指向第一个元素
    节点：存放用户需要的数据和链接下一个节点的地址

链表要与结构体搭
    链表要和结构体搭配使用，因为链表的节点存放的是各种数据和地址，所以用结构体输入数据。

相关函数
    malloc；void*malloc(unsigned int size)
            在内存的动态存储区分配一个长度为size的连续空间
            返回值是一个 指向分配域起始地址的指针 为void类型
            若未能成功执行返回为0(NULL)
    free；void free(void *p)
            释放由p指向的内存区，使这部分内存区能被其他变量使用
            p是最近一次调用malloc函数时的返回值
            free无返回值
**/

#if(0) //例题
#include <stdio.h>

struct student //定义结构体存放节点
{
  long num;
  float score;
  struct student *next; //定义 指向结构体的指针
                        //next是一个指向结构体的指针
};

int main(void)
{
    struct student *head, a, b, c;  //定义头指针和三个节点

//定义数据
    a.num = 10101;
    b.score = 89.5;

    b.num = 10103;
    b.score = 90.0;

    c.num = 10107;
    c.score = 85.0;

//定义指针
    head = &a;  //头指针=第一个结构体的指针
    a.next = &b; //节点1的指针是节点2的地址
    b.next = &c; //节点2的指针是节点3的地址
    c.next = NULL;
               //最后一个没有链，赋值为0(NULL)

    do
    {
       printf("%ld %5.1f\n", head->num, head->score);
       head = head->next;//指针操作打印，head等于下一个结构体的指针
    }while(head);
             //c节点没有连，c.next=0 do-while循环结束

    return 0;
}

#endif











#if(1)//自己仿照

#include <stdio.h>

struct student //定义结构体放节点
{
    int num;
    char *name;
    char *sex;
    float score;
    struct student *next; //定义结构体指针
};

int main(void)
{
    struct student *head, a, b, c,d;//定义头地址和4个节点

//给每个节点赋数据
    a.num=01;
    a.name = "何梦迪";
    a.sex = "女";
    a.score = 59.9;

    b.num=02;
    b.name = "何如那";
    b.sex = "女";
    b.score = 59.9;

    c.num=03;
    c.name = "曹鹏祥";
    c.sex = "男";
    c.score = 99.9;

    d.num=04;
    d.name = "李莫瑶";
    d.sex = "女";
    d.score = 19.9;

//给每个节点赋下一个节点的地址
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;//每个节点的结构体指针=下一个节点(结构体)的地址

    do
    {
        printf("number:%d name=%s sex=%s score=%5.2f\n",head->num, head->name, head->sex, head->score);
        head = head->next;                //指针操作，头地址下的小地址。定义时是*head 取地址的值
    }while(head);

}







#endif
