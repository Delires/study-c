/**struct student *del( struct student *head, int num)
{
    struct *p1, *p2;

//�жϿ�
    if(head == NULL)//û��
    {
        printf("This is null struct");
        goto END;
    }

    p1 = head;

    while( (p1->num!=num) && (p1->next != NULL) )
    {
        p2 = p1;
        p1 = p1->next;//p1�ȱ���
    }

    if( p1->num == num )//�ҵ���
    {
        if(p1 == head)//ͷһ������ַ��ͬ
        {
            head = p1->next;
        }
        else //�м��
        {
            p2->next = p1->next;
        }
        printf("Delet No:%d is succed", num);
        n = n-1;
    }
    else //�����˻�û�ҵ�
    {
        printf("not found");
    }

END:
    return head;  //if���Ƕ�head���и�������
}

**/



















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

