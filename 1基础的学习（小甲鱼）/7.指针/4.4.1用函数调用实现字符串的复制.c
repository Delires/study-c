/**
����һ����������ʵ���ַ����ĸ��ơ� ָ�뷨 �� �±귨

��a�ַ������Ƶ�b��ͬʱҲ�����ַ���(ֱ�Ӹ��ƹ�ȥ���Զ�������)
�������±귨a[i]
**/
#include <stdio.h>
char duplicate(char from[], char to[]);//��������
char z;                                //�ǵö��������ڱ�������
void main()
{
    char a[] = "I am a teacher";
    char b[] = "You are my stduent";
    printf("%s\n", a);
    printf("%s\n", b);

    z = duplicate(a, b);//ʹ�ú�������[]

    printf("%s\n", a);
    printf("%s", b);
}
char duplicate(char from[], char to[])//���庯����a,b���ݸ�frome,to
{
    int i=0; //iҪ����ֵ����Ȼ�����ͷ��ʼ��ֵ
    while(from[i] != '\0') //while()����ѭ������
    {                      //a��ֵ��b��һֱ��a������'\0'
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';//��󲹸�ֹͣ��,b����ַ�Ҳ���Զ���ʧ
    return z;
}
/**
i Ҫ����ֵ����Ȼ�����ͷ��ʼ��ֵ
Ҫ�����鸳ֵ������ ��'\0',��Ȼ���Զ���һ������
**/
