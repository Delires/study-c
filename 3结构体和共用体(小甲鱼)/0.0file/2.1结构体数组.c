/**
�ṹ������
    ����һ���ṹ��������һ��ѧ��������������ߵ����ݡ�
    �����ʮ��ѧ���������ʮ���ṹ�����ݣ���ʮ���ṹ��͹�����һ�����顣
    �ṹ�����飬���������ÿ������Ԫ�ض���һ���ṹ�塣
**/
#if(0)

#include <stdio.h>

#define NUM 3

struct person  //����һС�ṹ��
{
    char name[20];
    char phone[10];
};

int main(void)
{
    struct person man[NUM]; //����man����Ľṹ��
    int i;

    for(i=0; i<NUM; i++)
    {
      printf("intput name:\n");
      gets(man[i].name);   //gets()����������һ���ַ���������
      printf("intput phone:\n");
      gets(man[i].phone);
    }

    printf("\t\tname\t\t\t\t\tphone\n\n");    // \tˮƽ�Ʊ��

    for(i=0; i<NUM; i++)
    {
      printf("%20s\t\t\t%20s\n", man[i].name, man[i].phone);
    }

    return 0;
}


#endif









#if(1) //�Լ�дд

#include <stdio.h>

#define SUM 3
struct contact
{
    char name[20];   //���Ӹ�����д���ݣ�Ҫô*��Ҫô�ú�������
    char phone[20];
};

int main(void)
{
  struct contact tell[SUM];  //��������ṹ��
  int i;
  for(i=0; i<SUM; i++)//���д�����ݸ������ÿ���ṹ��
  {
      printf("intput name:\n");
      gets(tell[i].name);
      printf("intput phone:\n");
      gets(tell[i].phone);
  }

  printf("\t\tname\t\t\tphone\n");

  for(i=0; i<SUM; i++)
  {
      printf("\t%10s\t%10s\n", tell[i].name, tell[i].phone);
  }

 return 0;
}

#endif
