/**
������ͽṹ��һ�����������ڹ�����ÿ��ֻ�ܴ洢һ����

�����嶨��
    union ��������
    {

       ��Ա�б�

    }�����б�;

�����壬�ṹ�壬����ɻ���Ƕ��

����һ������д洢��ʦ�ִ洢ͬѧ��Ϣ����Ҫ�ù����塣�����ٴ�����ʦ�ľ͸���ѧ��������ѧ���͸�����ʦ
���ͼ 0.5.0
**/

/**
����ץס�˹�����ֻ�ܴ洢һ���������ص㣬Ҫôд��ְҵ��Ҫôд��༶�ţ�����ֻ��дһ��
**/
#include <stdio.h>

struct
{
   int num;
   char name[10];
   char sex;
   char job;
   union //���干���壬Ҫôд��༶��Ҫôд��ְҵ
   {
        int banji;
        char position[10];
   }category;//����������
}person[2];//�����ṹ������

int main(void)
{
    int i;
    for(i=0; i<2; i++)
    {
      printf("please int put number:");
      scanf("%d", &person[i].num);
                       while (getchar()!='\n') continue;//scanf����ֵ������\n�����Ҫôɾ����һ���\n��
                                                 //     Ҫô���� ������̻������������ while (getchar()!='\n') continue;

      printf("please int put name:");
      scanf("%s", &person[i].name);
                      while (getchar()!='\n') continue;

      printf("please int put sex:");
      scanf("%c", &person[i].sex);
                      while (getchar()!='\n') continue;

      printf("please int put job:");
      scanf("%c", &person[i].job);
                      while (getchar()!='\n') continue;


      if(person[i].job == 's' )
      {
        printf("please int put number of class��");
        scanf("%d", &person[i].category.banji);
        printf("\n\n");

      }
      else if(person[i].job == 't')
      {
        printf("please int put profess:");
        scanf("%s", &person[i].category.position);
        printf("\n\n");
      }
      else
      {
        printf("intput error");
      }
    }

    for(i=0; i<2; i++)
    {
        if(person[i].job == 's' )
        {
            printf("num=%d\tname=%s\tsex=%c\t", person[i].num, person[i].name, person[i].sex);
            printf("job=%c\tnbanji=%d\n",person[i].job, person[i].category.banji);
        }
        else
        {
            printf("num=%d\tname=%s\tsex=%c\t", person[i].num, person[i].name, person[i].sex);
            printf("job=%c\tposition=%s\n",person[i].job, person[i].category.position);
        }

    }
}

/**
scanf �ӵ���ֵ�������һ�� \n, �´�scanf ����\n(����)�������

scanf�������سɹ������������������������ʱ�����ˡ��ļ��������򷵻�EOF��

������̻���������
while (getchar()!='\n') continue;
**/
