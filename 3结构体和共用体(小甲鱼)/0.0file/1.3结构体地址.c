/**
�ṹ��ĵ�ַ �� ��һ����Ա�ĵ�ַ��ͬ
��Ϊ�ṹ�忪ʼ�洢�ĵط� ���� �ṹ���һ����Ա��ʼ�洢�ĵط�
**/

#include <stdio.h>
int main(void)
{
    struct student
    {
        int number;
        char *name;
        char sex;
        int age;
        char addres[30];
    } boy1;

    boy1.number =007;
    boy1.name = "jane";

    printf("Address of struct is %o:\n", &boy1);  //�ṹ��ĵ�ַ �� ��һ����Ա�ĵ�ַ��ͬ
    printf("Address of num is %o:\n", &boy1.number);

     printf("Address of num is %o:\n", &boy1.sex); //��������Ա��ַ��ͬ

    return 0;


}
