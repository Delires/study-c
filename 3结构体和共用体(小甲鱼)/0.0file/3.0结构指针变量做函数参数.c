/**
��һ���ṹ�������ֵ���ݸ���һ��������3�ַ���
     ����1���ýṹ������ĳ�Ա������
     ����2���ýṹ�����������
     ����3����ָ��ṹ�����/�����ָ����ʵ�Σ����ṹ�����/����ĵ�ַ�����β�

strcpy()�ַ�����������
     strcpy(A,"BCD"); ���ַ���BCD����������A��
**/
//����2���ýṹ�������������ֵ������
#include <stdio.h>
#include <string.h>

struct student //����ṹ��
{
    int num;
    char name[20];
    float score[3];
};

//��������
void print(struct student pu);
        //struct student ���൱�� int a �����Ҫ��ӡһ���ṹ��

int main(void)
{
    struct student stu; //����ṹ�����

    stu.num = 8;
    strcpy(stu.name, "Fishc.com!"); //��strcpy()�ַ�������������������name��Ӹ�ֵ
    stu.score[0] = 98.5;             //stu.name = "Fishc.com!"�Ǵ��
    stu.score[1] = 99.0;
    stu.score[2] = 98.5;

    print(stu);//����2���ýṹ�������������ֵ������
}


void print(struct student pu)//���庯��,��stu���ݸ�������pu
{
  printf("\tnum=%d\n", pu.num);
  printf("\tname=%s\n",  pu.name);
  printf("\tScore_1=%5.2f\n", pu.score[0]);
  printf("\tScore_2=%5.2f\n", pu.score[1]);
  printf("\tScore_3=%5.2f\n", pu.score[2]);

}
/**
 char name[20];
 strcpy(stu.name, "Fishc.com!");
�ǽ�"Fishc.com!"���ֵ���ݸ�name[20]��ջ���ֵ����
 char *name;
 name = "Fishc.com!"
�ǽ�"Fishc.com!"���ֵ�ĵ�ַ���ݸ�name����*��name��ȡֵ��ջ��ǵ�ַ����
**/
