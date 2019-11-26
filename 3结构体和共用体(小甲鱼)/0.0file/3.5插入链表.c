/**
����Ĺ��ɣ�ɾ��������
**/


#if(1)

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student *del(struct student *head, int num); //����ɾ���ڵ㺯�� �ṹ��ָ�뺯��(���ݽṹ��ָ��ͱ��)
struct student *creat(); //�����������������   �ṹ��ָ�뺯��
struct student *insert(struct student *head, struct student *stu_2);
           //��һ������ �����������ָ��
           //�ڶ������� ׼������������ַ

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
    struct student *stu, *p, *stu_2;
    int number;

//��̬��������
    stu = creat();
    p = stu;     //pҪ��ֵָ�룬del����Ҫ����
    print( stu );

//ɾ������
    printf("\nplease int put the number of delete: ");
    scanf("%d", &number);
    print( del(p, number) );

//��������
    printf("\nPlease intput the num to insert:");
    scanf("%d", &stu_2->num);
    printf("\nPlease intput the num to score:");
    scanf("%f", &stu_2->score);
    p = insert(stu, stu_2);  //����Ϊ �ṹ��stu_2������ֵҪ��&ȡֵ����
    print(p);

    printf("\n\n");
    system("pause");
    return 0;

}



//���ɶ�̬������
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




//ɾ��������
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





//����������
struct student *insert(struct student *head, struct student *stu_2)
{
    struct student *p0, *p1, *p2;

    p1 = head;  //�����������ֵ
    p0 = stu_2; //׼�����������ֵ

    if(NULL == head)//������
    {
        head = p0;//����ľ�Ϊ��һ������
        p0->next = NULL;
    }
    else
    {
        while( (p0->num > p1->num) && (p1->next !=NULL) )
        { //p0����������ڱ���С�ĺ��� �Ҳ������е�P1�ѱ�������
           p2 = p1;
           p1 = p1->next;
        }

        if(p0->num <= p1->num) //�ҵ������
        {
            if(head == p1) //���p1��ͷָ�룬��p0��Ҫ���ͷ
                {
                    head = p0;
                    p0->next = p1;
                }
            else //����ͷָ��嵽�м�
            {
                p2->next = p0; //p2��p1����һ��
                p0->next = p1; //p0��ָ��p1���嵽�м�
            }

        }
        else //p0���������Ǹ�
        {
            p1->next = p0;//p0�����
            p0->next = NULL; //p0��β
        }
    }
    n = n+1; //���������һ��

    return head;
}





//��ӡ������
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
#endif







