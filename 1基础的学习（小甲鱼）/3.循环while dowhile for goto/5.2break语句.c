#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0;
    char c;  //ע�����ַ����� �ո�Ҳ��asc��
    while(1) //whilѭ����䣬���������ж����,��0ִ��������䣬0ֱ���������
    {        //�����ԶΪ��
      c='\0'; // ��c����ֵ
      while(c!=13&&c!=27)
      {
          c=getch();//��������;���ӿ���̨��ȡһ���ַ���������ʾ����Ļ��
          printf("%c\n", c);
      }
      if(c==27)
        break;    //���c����27��ֱ���������ѭ��while(1)����
      i++;
      printf("The No. is %d", i);
    }
    printf("The end");

}
