/**
typedef ������ �궨��#define
  typedef ����������������ͣ�������������������
  #define �������������ݣ�������ȡһ��������

typedef����һ������������

**/

#include <stdio.h>

typedef int u8; //��int����Ϊu8

typedef struct
{
    int num;
    char *name;
    float score;
} JIEGOUTI;    //���ṹ������ΪJIEGOUTI

int main(void)
{
    u8 a=10; //u8 a == int a
    int b=100;
    printf("a:%d\tb:%d\n", a, b);

    JIEGOUTI hengmengdi; //JIEGOUTI hengmengdi == struct hemengdi
    hengmengdi.num = 01;
    hengmengdi.name = "���ε�";
    hengmengdi.score = 59.9;
    printf("number:%d\tname:%s\tscore:%f\n",hengmengdi.num, hengmengdi.name, hengmengdi.score);
}
