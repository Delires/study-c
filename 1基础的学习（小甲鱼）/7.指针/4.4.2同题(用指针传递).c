/**
����һ����������ʵ���ַ����ĸ��ơ� ָ�뷨 �� �±귨

��a�ַ������Ƶ�b��ͬʱҲ�����ַ���(ֱ�Ӹ��ƹ�ȥ���Զ�������)
������ָ�뷨*a
**/
#include <stdio.h>
void duplicate(char *from, char *to);//����ָ�뺯��

void main()
{
   char *a = "I am a teacher";
   char *b = "You are my student";//*a = a[]  *a���ǵ�ַa��ȡֵΪ
#if(0)
   char *b �ĳ� char b[] �Ϳ��Ա���ɹ�
#endif

   printf("%s\n", a);
   printf("%s\n", b);
   //�˴� a == *a

   duplicate(a, b);

   printf("%s\n", a);
   printf("%s\n", b);
}

void duplicate(char *from, char *to)
{
    for(; *from != '\0'; from++, to++)//*from from��ֵ
    {
        *to = *from;
    }
    *to = '\0';//to++�ȼ�1������for��䣬�����������ֵ����
}
/**
����Ϊʲô��
������ʽ���ڴ��еĸ�ֵ��ʽ��ͬ
char b[] �� ��ÿ����ĸ��ֵ������������� ��̬����auto
char *b  �ǵ�����ָ����������ݵĵ�ַ    ��̬����static

char *b�Ǿ�̬�����ǲ��ܸı�ģ�������ȴ��ͼ�ı����Իᱨ�����Ըĳ�char b[]
**/

