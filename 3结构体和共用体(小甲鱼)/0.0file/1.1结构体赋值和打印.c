/**
�ṹ��ĸ�ֵ�ʹ�ӡ
    ���ܶ������ṹ�帳ֵ���ӡ,ֻ���á�.���� �ṹ����.��Ա�б� ��ÿ����Ա��ֵ
    �����԰�һ���ṹ��ֱ�Ӹ��Ƹ���һ���ṹ��
**/
#include <stdio.h>
int main(void)
{
    struct student
    {
        int number;
        char name[20];
        char sex[5];
        int age;
        char addres[30];
    }student1, student2;
         //����ֱ�����ýṹ���������ƣ������ٺ��������ṹ����

    student1.number = 1;
    printf("intput name and sex:");
    scanf("%s", &student1.name);
    scanf("%s", &student1.sex);  //һ���мǣ��� �ṹ��.��Ա�б���в���

    student2 = student1;  //������ֱ�Ӱ�һ���ṹ�帳ֵ����һ��

    printf("number: %d\n", student2.number);
    printf("name: %s\n", student2.name);
    printf("sex: %s\n", student2.sex);//һ���� �ṹ��.��Ա�б� ���в���
     //�ַ����Ĵ�ӡ��%S������

     return 0;


}
