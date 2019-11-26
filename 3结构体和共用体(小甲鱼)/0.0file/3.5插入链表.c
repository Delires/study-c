/**
链表的构成，删除，插入
**/


#if(1)

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student *del(struct student *head, int num); //声明删除节点函数 结构体指针函数(传递结构体指针和编号)
struct student *creat(); //声明添加数据链函数   结构体指针函数
struct student *insert(struct student *head, struct student *stu_2);
           //第一个参数 被插入的链表指针
           //第二个参数 准备插入的链表地址

void print(struct student *head);//声明打印指针函数

int n; //全局变量，记录结构体个数

struct student
{
    int num;
    float score;
    struct student *next;
};


int main(void)
{
    struct student *stu, *p, *stu_2;
    int number;

//动态生成链表
    stu = creat();
    p = stu;     //p要赋值指针，del函数要调用
    print( stu );

//删除链表
    printf("\nplease int put the number of delete: ");
    scanf("%d", &number);
    print( del(p, number) );

//插入链表
    printf("\nPlease intput the num to insert:");
    scanf("%d", &stu_2->num);
    printf("\nPlease intput the num to score:");
    scanf("%f", &stu_2->score);
    p = insert(stu, stu_2);  //或定义为 结构体stu_2，传递值要加&取值符号
    print(p);

    printf("\n\n");
    system("pause");
    return 0;

}



//生成动态链表函数
struct student *creat()
{
    struct student *p1, *p2, *head;
    p1 = p2 = (struct student *)malloc(LEN);  //指针类型 LEN宽的数据

    printf("Please enter num:"); //p1先变心
    scanf("%d", &p1->num);
    printf("Please enter score:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;  //初始化

    while(p1->num) //序号为0结束
    {
        n++;
        if(n == 1)
        {
            head = p1; //p1为头节点
        }
        else
        {
            p2->next = p1; //p2连接新的p1
        }
        p2 = p1; //p2跟着变心

        p1 = (struct student *)malloc(LEN);//p1再变心
        printf("\nPlease enter num:");
        scanf("%d", &p1->num);
        printf("Please enter score:");
        scanf("%f", &p1->score);
    }
    p2->next = NULL;
    return head; //把头地址发送过去
}




//删除链表函数
struct student *del(struct student *head, int num)//删除链表函数
{
    struct student *p1, *p2;

    if(head == NULL)
    {
        printf("This is zero list");
        goto END;
    }

    p1 = head;
    while( (p1->num != num ) && (p1->next != NULL) )
    {
        p2 = p1;
        p1 = p1->next; //替换着找等于num的节点
    }

    if(p1->num == num)
    {
        if(p1 == head)//头一个
        {
            head = p1->next;
        }
        else//中间
        {
            p2->next = p1->next;//跳过P1节点
        }
        printf("\nDelete is sucessful is %d", num);
        n = n-1;
    }
    else
    {
        printf("%d no serve list", num);
    }

END:
    return head;

}





//插入链表函数
struct student *insert(struct student *head, struct student *stu_2)
{
    struct student *p0, *p1, *p2;

    p1 = head;  //被插入的链表值
    p0 = stu_2; //准备插入的链表值

    if(NULL == head)//空链表
    {
        head = p0;//插入的就为第一个链表
        p0->next = NULL;
    }
    else
    {
        while( (p0->num > p1->num) && (p1->next !=NULL) )
        { //p0按照序号排在比他小的后面 找不到运行到P1把表链找完
           p2 = p1;
           p1 = p1->next;
        }

        if(p0->num <= p1->num) //找到插入点
        {
            if(head == p1) //如果p1是头指针，则p0就要变成头
                {
                    head = p0;
                    p0->next = p1;
                }
            else //不是头指针插到中间
            {
                p2->next = p0; //p2是p1的上一个
                p0->next = p1; //p0又指向p1，插到中间
            }

        }
        else //p0是序号最大那个
        {
            p1->next = p0;//p0放最后
            p0->next = NULL; //p0结尾
        }
    }
    n = n+1; //插入链表多一个

    return head;
}





//打印链表函数
void print(struct student *head) //打印地址函数
{
    struct student *p;
    p = head;
    printf("\nThe list NO:%d\n\n", n);

    if(head) //if,如果有head就执行，不能使while
    {
      do
      {
        printf("序号是%d\n分数是%f\n", p->num, p->score);
        p = p->next;
      }while(p);
    }
}
#endif







