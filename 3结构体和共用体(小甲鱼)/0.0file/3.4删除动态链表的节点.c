#if(0) //дһ����̬���������ȶ�̬��ӽڵ㣬��ɾ����Ӧ�ڵ�

#include <stdio.h>
#include <malloc.h> //malloc������ ���ڴ�Ķ�̬�洢������һ��size���Ŀռ�
#include <stdlib.h>//system()����������dosָ��(���ı��������)

#define LEN sizeof(struct student)//����malloc�����Ĳ���
                                  //Ϊ�ṹ��struct student �ĳ���

struct student *creat(); //��������������������һ��ָ��creat
struct student *del( struct student *head, int num);
                        //ɾ��������  headͷָ�� num��Ҫɾ���Ľڵ�
                        //����һ��ָ��del
void print(struct student *head); //������ӡ������

struct student
{
   int num;
   float score;
   struct student *next;
};


int n; //����ȫ�ֱ���,��¼��Ŷ�������


int main(void)
{
    struct student *stu, *p;
    int number;

    stu = creat(); //���ö�̬������
    p = stu;  //��ӡ����
    print(stu);

    printf("Please enter the num to delete:");//����ɾ���ڵ����
    scanf("%d", &number);
    print( del(p,number) );//��ӡɾ���������,��ֵp����ָ�룬number���

    printf("\n\n");
    system("pause");//dos����
}


struct student *creat() //��������������
{
    struct student *p1, *p2, *head;

    p1 = p2 =(struct student *)malloc(LEN);//(struct student *)˵��P1����  LEN˵����С
    printf("Please enter a number:");
    scanf("%d", &p1->num);
    printf("Please enter a score:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;

    while(p1->num)//����num��Ϊ0
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

        p1 = (struct student *)malloc(LEN);//(struct student *)˵��P1����  LEN˵����С
        printf("\nPlease enter a number:");
        scanf("%d", &p1->num);
        printf("Please enter a score:");
        scanf("%f", &p1->score);
     }
       p2->next = NULL;
       return head;
}


struct student *del( struct student *head, int num)
{                                //ɾ��������  headͷָ�� num��Ҫɾ���Ľڵ����;
    struct student *p1, *p2;
    if(NULL == head)//ͷָ����0��������
    {
        printf("\nThis list is null!\n");
        goto END; //����end��ŵĵط�
    }

//Ѱ��
    p1 = head;//ͷָ���p1
    while( (p1->num != num)&&(p1->next != NULL) )//ͷ��ַ����Ҫ�������ַ�ղ�ָ��0
    {
        p2 =p1;        //��p2p1ָ��һ��
        p1 = p1->next; //p1��ָ����һ����,���ϰ����ң�ֱ���ҵ�Ҫɾ�����������
    }

//��ʼɾ��
    if(num == p1->num)
    {
       if(p1 == head) //�ǵ�һ��
       {
           head = p1->next;//ͷָ��ڶ���
       }
       else  //���м�
       {
           p2->next = p1->next; //ԭ��P2ָ��P1,����ָ��P1��ָ��
       }

       printf("\n Delete NO: %d succeed!\n", num);
       n= n-1;//n��������
    }
    else//û�ҵ�
    {
        printf("%d not been found!\n", num);
    }
END:
    return head;
}


void print(struct student *head) //������ӡ������
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

struct student *del(struct student *head, int num); //����ɾ���ڵ㺯�� �ṹ��ָ�뺯��(���ݽṹ��ָ��ͱ��)
struct student *creat(); //�����������������   �ṹ��ָ�뺯��
void print(struct student *head);//������ӡָ�뺯��

int n; //ȫ�ֱ�������¼�ṹ�����

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
    p = stu;     //pҪ��ֵָ�룬del����Ҫ����
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
    p1 = p2 = (struct student *)malloc(LEN);  //ָ������ LEN�������

    printf("Please enter num:"); //p1�ȱ���
    scanf("%d", &p1->num);
    printf("Please enter score:");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;  //��ʼ��

    while(p1->num) //���Ϊ0����
    {
        n++;
        if(n == 1)
        {
            head = p1; //p1Ϊͷ�ڵ�
        }
        else
        {
            p2->next = p1; //p2�����µ�p1
        }
        p2 = p1; //p2���ű���

        p1 = (struct student *)malloc(LEN);//p1�ٱ���
        printf("\nPlease enter num:");
        scanf("%d", &p1->num);
        printf("Please enter score:");
        scanf("%f", &p1->score);
    }
    p2->next = NULL;
    return head; //��ͷ��ַ���͹�ȥ
}


void print(struct student *head) //��ӡ��ַ����
{
    struct student *p;
    p = head;
    printf("\nThe list NO:%d\n\n", n);

    if(head) //if,�����head��ִ�У�����ʹwhile
    {
      do
      {
        printf("�����%d\n������%f\n", p->num, p->score);
        p = p->next;
      }while(p);
    }
}


struct student *del(struct student *head, int num)//ɾ��������
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
        p1 = p1->next; //�滻���ҵ���num�Ľڵ�
    }

    if(p1->num == num)
    {
        if(p1 == head)//ͷһ��
        {
            head = p1->next;
        }
        else//�м�
        {
            p2->next = p1->next;//����P1�ڵ�
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






