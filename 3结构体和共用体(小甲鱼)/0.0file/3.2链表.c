/**
��������飬���鲻�ܶ�̬���峤�ȶ��������

�������ɣ�
    ������ͷָ��ͽڵ㹹��
    ͷָ��:���һ����ַ���õ�ַָ���һ��Ԫ��
    �ڵ㣺����û���Ҫ�����ݺ�������һ���ڵ�ĵ�ַ

����Ҫ��ṹ���
    ����Ҫ�ͽṹ�����ʹ�ã���Ϊ����Ľڵ��ŵ��Ǹ������ݺ͵�ַ�������ýṹ���������ݡ�

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

#if(0) //����
#include <stdio.h>

struct student //����ṹ���Žڵ�
{
  long num;
  float score;
  struct student *next; //���� ָ��ṹ���ָ��
                        //next��һ��ָ��ṹ���ָ��
};

int main(void)
{
    struct student *head, a, b, c;  //����ͷָ��������ڵ�

//��������
    a.num = 10101;
    b.score = 89.5;

    b.num = 10103;
    b.score = 90.0;

    c.num = 10107;
    c.score = 85.0;

//����ָ��
    head = &a;  //ͷָ��=��һ���ṹ���ָ��
    a.next = &b; //�ڵ�1��ָ���ǽڵ�2�ĵ�ַ
    b.next = &c; //�ڵ�2��ָ���ǽڵ�3�ĵ�ַ
    c.next = NULL;
               //���һ��û��������ֵΪ0(NULL)

    do
    {
       printf("%ld %5.1f\n", head->num, head->score);
       head = head->next;//ָ�������ӡ��head������һ���ṹ���ָ��
    }while(head);
             //c�ڵ�û������c.next=0 do-whileѭ������

    return 0;
}

#endif











#if(1)//�Լ�����

#include <stdio.h>

struct student //����ṹ��Žڵ�
{
    int num;
    char *name;
    char *sex;
    float score;
    struct student *next; //����ṹ��ָ��
};

int main(void)
{
    struct student *head, a, b, c,d;//����ͷ��ַ��4���ڵ�

//��ÿ���ڵ㸳����
    a.num=01;
    a.name = "���ε�";
    a.sex = "Ů";
    a.score = 59.9;

    b.num=02;
    b.name = "������";
    b.sex = "Ů";
    b.score = 59.9;

    c.num=03;
    c.name = "������";
    c.sex = "��";
    c.score = 99.9;

    d.num=04;
    d.name = "��Ī��";
    d.sex = "Ů";
    d.score = 19.9;

//��ÿ���ڵ㸳��һ���ڵ�ĵ�ַ
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;//ÿ���ڵ�Ľṹ��ָ��=��һ���ڵ�(�ṹ��)�ĵ�ַ

    do
    {
        printf("number:%d name=%s sex=%s score=%5.2f\n",head->num, head->name, head->sex, head->score);
        head = head->next;                //ָ�������ͷ��ַ�µ�С��ַ������ʱ��*head ȡ��ַ��ֵ
    }while(head);

}







#endif
