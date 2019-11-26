#if(0) //写一个动态数据连，先动态添加节点，再删除相应节点

#include <stdio.h>
#include <malloc.h> //malloc函数库 在内存的动态存储区分配一个size长的空间
#include <stdlib.h>//system()函数，发送dos指令(即改变电脑设置)

#define LEN sizeof(struct student)//定义malloc函数的参数
                                  //为结构体struct student 的长度

struct student *creat(); //声明创建链表函数，返回一个指针creat
struct student *del( struct student *head, int num);
                        //删除链表函数  head头指针 num是要删除的节点
                        //返回一个指针del
void print(struct student *head); //声明打印链表函数

struct student
{
   int num;
   float score;
   struct student *next;
};


int n; //定义全局变量,记录存放多少数据


int main(void)
{
    struct student *stu, *p;
    int number;

    stu = creat(); //调用动态链表函数
    p = stu;  //打印链表
    print(stu);

    printf("Please enter the num to delete:");//进行删除节点操作
    scanf("%d", &number);
    print( del(p,number) );//打印删除后的链表,赋值p链表指针，number序号

    printf("\n\n");
    system("pause");//dos操作
}


struct student *creat() //建立创建链表函数
{
    struct student *p1, *p2, *head;

    p1 = p2 =(struct student *)malloc(LEN);//(struct student *)说明P1类型  LEN说明大小
    printf("Please enter a number:");
    scanf("%d", &p1->num);
    printf("Please enter a score:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;

    while(p1->num)//输入num不为0
    {
        n++;
        if(n==1)
        {
            head = p1;
        }
        else
        {
            p2->next = p1;
        }
        p2 = p1;

        p1 = (struct student *)malloc(LEN);//(struct student *)说明P1类型  LEN说明大小
        printf("\nPlease enter a number:");
        scanf("%d", &p1->num);
        printf("Please enter a score:");
        scanf("%f", &p1->score);
     }
       p2->next = NULL;
       return head;
}


struct student *del( struct student *head, int num)
{                                //删除链表函数  head头指针 num是要删除的节点序号;
    struct student *p1, *p2;
    if(NULL == head)//头指针是0链表不存在
    {
        printf("\nThis list is null!\n");
        goto END; //跳到end标号的地方
    }

//寻找
    p1 = head;//头指针给p1
    while( (p1->num != num)&&(p1->next != NULL) )//头地址不是要找且最地址终不指向0
    {
        p2 =p1;        //让p2p1指到一起
        p1 = p1->next; //p1又指向下一个了,不断挨个找，直到找到要删除的数或结束
    }

//开始删除
    if(num == p1->num)
    {
       if(p1 == head) //是第一个
       {
           head = p1->next;//头指向第二个
       }
       else  //是中间
       {
           p2->next = p1->next; //原来P2指向P1,现在指向P1的指向
       }

       printf("\n Delete NO: %d succeed!\n", num);
       n= n-1;//n记链表数
    }
    else//没找到
    {
        printf("%d not been found!\n", num);
    }
END:
    return head;
}


void print(struct student *head) //建立打印链表函数
{
   struct student *p;
   printf("\nThere are %d record!\n\n", n);

   p = head;
   if(head)
   {
     do
     {
       printf("number=%d\tscore=%f\n", p->num, p->score);
       p = p->next;
     }while(p);
   }
}

#endif

















#if(1)

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student *del(struct student *head, int num); //声明删除节点函数 结构体指针函数(传递结构体指针和编号)
struct student *creat(); //声明添加数据链函数   结构体指针函数
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
    struct student *stu, *p;
    int number;

    stu = creat();
    p = stu;     //p要赋值指针，del函数要调用
    print( stu );

    printf("\nplease int put the number of delete: ");
    scanf("%d", &number);
    print( del(p, number) );

    printf("\n\n");
    system("pause");
    return 0;

}


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

#endif






