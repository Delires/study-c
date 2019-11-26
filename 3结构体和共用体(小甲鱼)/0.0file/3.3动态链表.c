/**
��̬������
��̬�����������ڣ�����Ҫ��ǰ��������Ľڵ������������������ӡ������������鲻д�����ȣ�����ʵ��ʹ�ö��ı���

��غ���
    malloc��void*malloc(unsigned int size)
            ���ڴ�Ķ�̬�洢������һ������Ϊsize�������ռ�
            ����ֵ��һ�� ָ���������ʼ��ַ��ָ�� Ϊvoid����
            ��δ�ܳɹ�ִ�з���Ϊ0(NULL)
    free��void free(void *p)
            �ͷ���pָ����ڴ�����ʹ�ⲿ���ڴ����ܱ���������ʹ��
            p�����һ�ε���malloc����ʱ�ķ���ֵ
            free�޷���ֵ
**/

#if(0)//����

#include <stdio.h>
#include <malloc.h> //malloc������ ���ڴ�Ķ�̬�洢������һ��size���Ŀռ�
#include <stdlib.h>//system()����������dosָ��(���ı��������)

#define LEN sizeof(struct student)//����malloc�����Ĳ���
                                  //Ϊ�ṹ��struct student �ĳ���
struct student *creat(); //��������������
void print(struct student *head); //������ӡ������

struct student
{
   int num;
   float score;
   struct student *next;
};


int n; //����ȫ�ֱ���

int main(void)
{
    struct student *stu;

    stu = creat(); //�ṹ��ָ��stu����creat()���ص�head�ĵ�ַ
    print( stu );

    printf("\n\n");
    //system("pause");

    return 0;
}


struct student *creat()//�������������������һ��ָ��
{
   struct student *head;
   struct student *p1, *p2;

   p1 = p2 = (struct student *)malloc(LEN);   //LEN��student�ṹ��Ĵ�С

   printf("Please enter the num:");
   scanf("%d", &p1->num);
   printf("Please enter the score:");
   scanf("%f", &p1->score);

   head = NULL;
   n = 0; //head,n��ʼ��

   while( p1->num ) //num������0ʱ
   {
       n++;
       if(n == 1)//�����һ���ڵ�
       {
           head = p1;  //��������ͷ�ڵ�ָ��p1
       }
       else
       {
           p2->next = p1; //p2�ĵ�ַָ��p1
       }

       p2 = p1; //ʹP2ָ��ղŽ����Ľڵ�

       p1 = (struct student *)malloc(LEN);  //p1�ٴ���һ���µĽڵ㣬(struct student *)��ʾ�����ڵ����ʽ
       printf("\nPlease enter the num:");//����ڶ����ڵ�
       scanf("%d", &p1->num);
       printf("Please enter the score:");
       scanf("%f", &p1->score);
     }
     p2->next = NULL; //���ṹ��num��ֵΪ0ʱ���������ӽڵ�
     return head;
}
//p1 p2��������ָ�룬�൱��������������ӣ�����ӡ��head��ʼ

void print(struct student *head) //��ӡ����
{
    struct student *p;//����ṹ��ָ��p����head��ֵ
    printf("\nThere are %d record!\n\n", n);//��ӡ����ܸ���

    p = head;
    if(head)
    {
      do
      {
        printf("number:%d score:%f\n",p->num, p->score);
        p = p->next;                //ָ�������ͷ��ַ�µ�С��ַ������ʱ��*head ȡ��ַ��ֵ
      }while(p);
    }
}

#endif












#if(1) //�Լ�����̬��������

#include <stdio.h>
#include <malloc.h> //����malloc
#include <stdlib.h> //����sysrem

#define LEN sizeof(struct student) //����malloc�������ó���

struct student *creat(); //��������������
void print(struct student *head);//������ӡ����

int n; //nͳ��������

struct student
{
    int num;
    float score;
    struct student *next; //�ṹ��ָ��
};



int main(void)
{
    struct student *stu; //����ṹ��ָ��
    stu = creat(); //��̬����ָ�봫��
    print( stu );
    printf("\n\n");

    return 0;
}


struct student *creat()//������
{
    struct student *p1, *p2, *head;

    p1 = p2 = (struct student *)malloc(LEN); //��p1p2���䶯̬�洢�ռ�
    printf("Please enter number:");//p1�ȱ���
    scanf("%d", &p1->num);
    printf("Please enter number:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;  //��ʼ��

    while(p1->num) //��Ų�Ϊ0�ͼ�������
    {
        n++;
        if(n==1)
        {
            head = p1; //����һ���ڵ��ַ��head
        }
        else
        {
            p2->next = p1; //p2����p1
        }
        p2 = p1; //p2�ٱ���

        p1 = (struct student *)malloc(LEN); //������p1
        printf("\nPlease enter number:");
        scanf("%d", &p1->num);
        printf("Please enter number:");
        scanf("%f", &p1->score);
    }

    p2->next = NULL;  //������ϣ���p2��β
    return head; //����һ��ָ�봫�ݻ�ȥ
}


void print(struct student *head)//��ӡָ�룬stu����head
{
   struct student *p;
   printf("�������Ϊ%d\n", n);
   p = head;

   if(head)//�д���ֵ�ʹ�ӡ
   {
       do
       {
           printf("���Ϊ��%d\n����Ϊ��%f\n", p->num, p->score);
           p = p->next; //ÿ�δ�ӡ��p�͵��ڵڶ�������ĵ�ַ
       }while(p);
   }
}

#endif
 /**
void print(struct student *head) //��ӡ����
{
    struct student *p;//����ṹ��ָ��p����head��ֵ
    printf("\nThere are %d record!\n\n", n);//��ӡ����ܸ���

    p = head;
    if(head)
    {
      do
      {
        printf("number:%d score:%f\n",p->num, p->score);
        p = p->next;                //ָ�������ͷ��ַ�µ�С��ַ������ʱ��*head ȡ��ַ��ֵ
      }while(p);
    }
}

**/





