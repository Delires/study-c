#include <stdio.h>
void duplicate(char *from, char *to);//����ָ�뺯��

void main()
{
   char *a = "I am a teacher";
   char b[] = "You are my student";//*a = a[]  *a���ǵ�ַa��ȡֵΪ
  //char *b �ĳ� char b[] �Ϳ��Ա���ɹ�
  //char b[] ��auto�����ɸı�
  //char *b  ��static�������ɸı�


   printf("%s\n", a);
   printf("%s\n", b);
   //�˴� a == *a

   duplicate(a, b);

   printf("%s\n", a);
   printf("%s\n", b);
}

void duplicate(char *from, char *to)
{
    while((*to = *from) != '\0')//�Ѹ�ֵд��while()�ж��� ������д��{}��
    {                           //ֻҪ�����ڽ�����'\0' ��һֱ������ȥ
        *to++;
        *from++;
    }
    #if(0)
        while( (*to++ = *from++ ) !='\0' )//*��++��������ȼ��ߣ�ȫд��������
        {
             ;
        }
    #endif)

    #if(0)
        while( *to++ = *from++)//ʡ���˽�������'\0'
        {                      //��Ϊ0��ASC����'\0' ��a��ֵ��,���һ���ַ���\0��0����while���Ϊ0���Լ�����
            ;
        }
    #endif

}
