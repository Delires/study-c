/**
���һ��ͶƱϵͳ����4�ˣ�������ʮ�����������ͳ�Ƴ���Ʊ��ߵ�

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
    char str[]="���ε�", str1[]="������", str2[]="�γ�", str3[]="�ο�", str4[]="Բ��";
                  //�����ȶ�����Щ�ַ������ܱȽ�


    printf("��ӭ�����ѧ��ͶƱϵͳ\n");
    printf("���β�ѡ��Ա�к��εϣ������飬�γԣ��οɣ�Բ��\n");
    for(i=0; i<10; i++)
    {
        printf("�������%d��ͶƱ����:", i+1);
        scanf("%s", &hxs[i].name);
    }


    for(i=0; i<10; i++) //����Ʊ��
    {
     if(strcmp(hxs[i].name, "���ε�")==0)    //�Ƚ��ַ�����Ҫ���ַ����ȽϺ���strcmp ֱ�ӱȽ�if(hxs[i].name == "l")�Ǵ�ģ�
     {
        a++;
     }
     else if(strcmp(hxs[i].name, "������")==0)
     {
        b++;
     }
     else if(strcmp(hxs[i].name, "�γ�")==0)
     {
        c++;
     }
     else if(strcmp(hxs[i].name, "Բ��")==0)
     {
        d++;
     }
     else if(strcmp(hxs[i].name, "�ο�")==0)
     {
        e++;
     }
    }

    printf("\n\n");
    printf("���ε�Ʊ����:%d\n", a);//��ӡ��ÿ����Ʊ�����
    printf("������Ʊ����:%d\n", b);
    printf("�γ�Ʊ����:%d\n", c);
    printf("Բ��Ʊ����:%d\n", d);
    printf("�ο�Ʊ����:%d\n", e);

    printf("\n");
    sum=compare(a, b , c, d, e); //���ú����ҳ����ֵ
    if(sum==a)//��ӡ���ھ������ֿ�ֱ�ӱȽ��ַ�������
    {
      printf("���ε������ѧ��");
    }
    else if(sum==b)
    {
      printf("�����������ѧ��");
    }
    else if(sum==c)
    {
      printf("�γ������ѧ��");
    }
    else if(sum==d)
    {
      printf("Բ�������ѧ��");
    }
    else if(sum==e)
    {
      printf("�ο������ѧ��");
    }


}



#if(0)//����ʦ��
for(i=0; i<10; i++) //�ж�������˭�ĵ�Ʊ��
    {
        if(hxs[i].name=="���ε�")  /����û������εϣ���ô�Ƚϣ���������
        {
          a=a+1;
        }
        else if(hxs[i].name=="������")
        {
          b++;
        }
        else if(hxs[i].name=="�ο�")
        {
          c++;
        }
        else if(hxs[i].name=="�γ�")
        {
          d++;
        }
        else if(hxs[i].name=="Բ��")
        {
          e++;
        }
    }
#endif




