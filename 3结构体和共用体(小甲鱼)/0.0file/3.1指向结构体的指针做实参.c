/**
��һ���ṹ�������ֵ���ݸ���һ��������3�ַ���
     ����1���ýṹ������ĳ�Ա������
     ����2���ýṹ�����������
     ����3����ָ��ṹ�����/�����ָ����ʵ�Σ����ṹ�����/����ĵ�ַ�����β�

strcpy()�ַ�����������
     strcpy(A,"BCD"); ���ַ���BCD����������A��
**/

#include <stdio.h> //�� ָ��ṹ�� ��ָ�� ��ʵ��
#include <string.h>

struct student
{
  int num;
  char name[20];
  float score[3];
};


void print(struct student *p); //��ӡ�ṹ��� ȡֵ*
         //�� ָ��ṹ�� ��ָ�� ��ʵ��
void main()
{
    struct student stu;

    stu.num = 8;
    strcpy(stu.name, "Fish.com");
    stu.score[0] = 98.5;
    stu.score[1] = 98.5;
    stu.score[2] = 99.5;

    print( &stu );  //&���� �ṹ��ĵ�ַ

}


void print(struct student *p)//���庯������stu�ĵ�ַ��������p
{
  printf("\tnum=%d\n", p -> num);
  printf("\tname=%s\n", p -> name);
  printf("\tScore_1=%5.2f\n", p -> score[0]);
  printf("\tScore_2=%5.2f\n", p -> score[1]);
  printf("\tScore_3=%5.2f\n", p -> score[2]);

}
