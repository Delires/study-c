/**
�ṹ���ʼ��
    ����Խṹ�����Ԫ�ذ�����ֵ����ʮ���鷳��������һ��ֱ�ӳ�ʼ���İ취
    �磺 struct student
         {
           ��Ա�б�;
         } ������1={}, ������2={};
**/
#include <stdio.h>
int main(void)
{
    struct
    {
        int number;
        char *name; //ֻ����ָ��*�����ܶ��ַ�����Ӹ�ֵ
        char *sex;  //Ҫô *name Ҫôname[10]
        int age;
    } boy1={001, "caopengxiang", "man", 15}, boy2;

    boy2 = boy1;

    printf(" number=%d\n name=%s\n sex=%s\n age=%d\n", boy1.number, boy1.name, boy1.sex, boy1.age);
    printf("\n\n\n");
    printf(" number=%d\n name=%s\n sex=%s\n age=%d\n", boy2.number, boy2.name, boy2.sex, boy2.age);

    return 0;
}




