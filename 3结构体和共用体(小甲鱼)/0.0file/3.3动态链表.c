/**
动态链表建立
动态链表优势在于，不需要提前定义链表的节点个数，而是随用随添加。就类似于数组不写具体宽度，根据实际使用而改变宽度

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

#if(0)//甲鱼

#include <stdio.h>
#include <malloc.h> //malloc函数库 在内存的动态存储区分配一个size长的空间
#include <stdlib.h>//system()函数，发送dos指令(即改变电脑设置)

#define LEN sizeof(struct student)//定义malloc函数的参数
                                  //为结构体struct student 的长度
struct student *creat(); //声明创建链表函数
void print(struct student *head); //声明打印链表函数

struct student
{
   int num;
   float score;
   struct student *next;
};


int n; //定义全局变量

int main(void)
{
    struct student *stu;

    stu = creat(); //结构体指针stu等于creat()返回的head的地址
    print( stu );

    printf("\n\n");
    //system("pause");

    return 0;
}


struct student *creat()//链表函数，这个函数就是一个指针
{
   struct student *head;
   struct student *p1, *p2;

   p1 = p2 = (struct student *)malloc(LEN);   //LEN是student结构体的大小

   printf("Please enter the num:");
   scanf("%d", &p1->num);
   printf("Please enter the score:");
   scanf("%f", &p1->score);

   head = NULL;
   n = 0; //head,n初始化

   while( p1->num ) //num不等于0时
   {
       n++;
       if(n == 1)//代表第一个节点
       {
           head = p1;  //数据链的头节点指向p1
       }
       else
       {
           p2->next = p1; //p2的地址指向p1
       }

       p2 = p1; //使P2指向刚才建立的节点

       p1 = (struct student *)malloc(LEN);  //p1再创建一个新的节点，(struct student *)表示创建节点的形式
       printf("\nPlease enter the num:");//输入第二个节点
       scanf("%d", &p1->num);
       printf("Please enter the score:");
       scanf("%f", &p1->score);
     }
     p2->next = NULL; //当结构体num赋值为0时，不再链接节点
     return head;
}
//p1 p2就是两个指针，相当于连接数组的链子，最后打印从head开始

void print(struct student *head) //打印函数
{
    struct student *p;//定义结构体指针p，把head赋值
    printf("\nThere are %d record!\n\n", n);//打印输出总个数

    p = head;
    if(head)
    {
      do
      {
        printf("number:%d score:%f\n",p->num, p->score);
        p = p->next;                //指针操作，头地址下的小地址。定义时是*head 取地址的值
      }while(p);
    }
}

#endif












#if(1) //自己，动态输入链表

#include <stdio.h>
#include <malloc.h> //调用malloc
#include <stdlib.h> //调用sysrem

#define LEN sizeof(struct student) //定义malloc函数调用长度

struct student *creat(); //声明穿件链表函数
void print(struct student *head);//声明打印函数

int n; //n统计链表数

struct student
{
    int num;
    float score;
    struct student *next; //结构体指针
};



int main(void)
{
    struct student *stu; //定义结构体指针
    stu = creat(); //动态链表指针传递
    print( stu );
    printf("\n\n");

    return 0;
}


struct student *creat()//链表函数
{
    struct student *p1, *p2, *head;

    p1 = p2 = (struct student *)malloc(LEN); //给p1p2分配动态存储空间
    printf("Please enter number:");//p1先变心
    scanf("%d", &p1->num);
    printf("Please enter number:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;  //初始化

    while(p1->num) //序号不为0就继续链接
    {
        n++;
        if(n==1)
        {
            head = p1; //链第一个节点地址给head
        }
        else
        {
            p2->next = p1; //p2链接p1
        }
        p2 = p1; //p2再变心

        p1 = (struct student *)malloc(LEN); //再输入p1
        printf("\nPlease enter number:");
        scanf("%d", &p1->num);
        printf("Please enter number:");
        scanf("%f", &p1->score);
    }

    p2->next = NULL;  //连接完毕，给p2封尾
    return head; //把这一串指针传递回去
}


void print(struct student *head)//打印指针，stu传给head
{
   struct student *p;
   printf("链表个数为%d\n", n);
   p = head;

   if(head)//有传递值就打印
   {
       do
       {
           printf("编号为：%d\n分数为：%f\n", p->num, p->score);
           p = p->next; //每次打印完p就等于第二个链表的地址
       }while(p);
   }
}

#endif
 /**
void print(struct student *head) //打印函数
{
    struct student *p;//定义结构体指针p，把head赋值
    printf("\nThere are %d record!\n\n", n);//打印输出总个数

    p = head;
    if(head)
    {
      do
      {
        printf("number:%d score:%f\n",p->num, p->score);
        p = p->next;                //指针操作，头地址下的小地址。定义时是*head 取地址的值
      }while(p);
    }
}

**/





