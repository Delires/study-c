/**
ʲô�ǽṹ�������
    ��ʵ�ʶ����У�������������Ա�ɼ��������һ���˵���Ϣ�͡����ǰ���Щ������Ϣ�ɹ�����Ϊһ���ṹ�壬���ڲ���

����ṹ����ʽ:
    struct �ṹ��
    {
      ��Ա�б�     //��Ա�б�Ϊ������˵���� ��Ա��;
    };

����ṹ�����ͱ���
    �������ṹ�������ٶ��������
    �磺
       struct �ṹ��
       {
         ��Ա�б�
       }������1,������2;
**/
#include <stdio.h>
int main(void) //����ṹ�����
{
    struct student
    {
        int num;       //4t
        char name[20]; //20t
        char sex;      //1t
        int age;       //4t
        float score;   //4t
        char addr[30]; //30t
    }student1,student2;

//�����ϣ�student1,student2��studentt��ͬһ���ͽṹ��,�����Ƕ�Ӧռ67type
//����ʵ�������,��sizeof������,��ͬ��ԭ���Ǳ��������Զ��Ż�
    printf("%d", sizeof(student1));

    return 0;
}










