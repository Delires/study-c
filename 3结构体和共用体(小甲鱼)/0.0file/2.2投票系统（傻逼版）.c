/**
���һ��ͶƱϵͳ����5�ˣ�������ʮ�����������ͳ�Ƴ�˭��ɵ��

���ȽϺ�����int strcmp(char *str1, char *str2);  <string.h>
**/

#include <stdio.h>
#include <string.h>
struct toupiao//�����ṹ�����������
{
    char name[20];
};

int compare(int i, int j ,int k, int l, int m)//�ȴ�С����
{
   int p;
   p=(i>j)?i:j;
   p=(p>k)?p:k;
   p=(p>l)?p:l;
   p=(p>m)?p:m;

   return p;
}

int main(void)
{
    struct toupiao hxs[10]; //���������
    int a=0, b=0, c=0, d=0, e=0;//ͳ�ƴ���
    int sum;
    int i ;                                   //ѭ��
    char str[]="��������", str1[]="����", str2[]="giao��", str3[]="����", str4[]="��";
                  //�����ȶ�����Щ�ַ������ܱȽ�


    printf("��ӭ����ɵ��ͶƱϵͳ\n");
    printf("���β�ѡ��Ա���������䣬������giao�磬���ӣ���\n");
    for(i=0; i<10; i++)
    {
        printf("�������%d��ͶƱ����:", i+1);
        scanf("%s", &hxs[i].name);
    }


    for(i=0; i<10; i++) //����Ʊ��
    {
     if(strcmp(hxs[i].name, "��������")==0)    //�Ƚ��ַ�����Ҫ���ַ����ȽϺ���strcmp ֱ�ӱȽ�if(hxs[i].name == "l")�Ǵ�ģ�
     {
        a++;
     }
     else if(strcmp(hxs[i].name, "����")==0)
     {
        b++;
     }
     else if(strcmp(hxs[i].name, "giao��")==0)
     {
        c++;
     }
     else if(strcmp(hxs[i].name, "����")==0)
     {
        d++;
     }
     else if(strcmp(hxs[i].name, "��")==0)
     {
        e++;
     }
    }

    printf("\n\n");
    printf("��������Ʊ����:%d\n", a);//��ӡ��ÿ����Ʊ�����
    printf("����Ʊ����:%d\n", b);
    printf("giao��Ʊ����:%d\n", c);
    printf("����Ʊ����:%d\n", d);
    printf("��Ʊ����:%d\n", e);

    printf("\n");
    sum=compare(a, b , c, d, e); //���ú����ҳ����ֵ
    if(sum==a)//��ӡ���ھ������ֿ�ֱ�ӱȽ��ַ�������
    {
      printf("����������ɵ��");
    }
    else if(sum==b)
    {
      printf("giao����ɵ��");
    }
    else if(sum==c)
    {
      printf("������ɵ��");
    }
    else if(sum==d)
    {
      printf("Բ����ɵ��");
    }
    else if(sum==e)
    {
      printf("����ɵ��");
    }


}

