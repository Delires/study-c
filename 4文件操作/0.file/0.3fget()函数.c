/**
fgetc()�ļ��ַ��������

fgetc(fp)�������ã���ȡ�ļ��������Զ����д�ķ�ʽ��(��Ϊ�����ַ��Ż����)

ʹ�ø�ʽ
  fputc(ch, fp);   //��ch�ַ� д��fp�ļ�
**/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[20];

    printf("Please input the filename you want to write:");
    scanf("%s", &filename); //д���ļ���

    if( !( fp = fopen(filename, "r") ) ) //��ʧ�ܷ���NULL=0
     {      //r ��һ���ļ����������

         printf("Cannot open the file!\n");
         exit(0);
     }

     while( ch != EOF)//����ĩβ�������Զ��ص�
     {
         ch = fgetc(fp);//���ļ�
         putchar(ch);//��ӡ��ch
     }

     fclose(fp); //�ر��ļ����п��й�
}
