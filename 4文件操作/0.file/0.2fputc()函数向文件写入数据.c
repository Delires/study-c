/**
�ļ��� fopen����
   FILE *fp;
   fp = fopen("�ļ���"�� "ʹ�÷�ʽ"); //��fpָ��ָ����ļ�
                                   //ʹ�÷�ʽ�о�����ַ���Ӧ

fputc()�������ã���ȡ�ļ���������д���д�ķ�ʽ��(��Ϊ�����ַ��Ż�д��)

fputc()�����ļ�д���ַ�
  fputc(ch, fp);   //���ַ�ch��ֵд��fpָ����ļ�

fgetc()�ļ��ַ��������
  fgetc( fp);   //��fp�ļ��ַ�����

EOF
  Ctrl+Z
**/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[20];

    printf("Please input the filename you want to write:");
    scanf("%s", &filename); //д���ļ���

    if( !( fp = fopen(filename, "wt+") ) ) //��ʧ�ܷ���NULL=0
     {      //wt+ ��д�򿪻��Ž���һ���ı��ļ��������д��
            //fputc����������д���д��ģʽ�²���ʹ��
         printf("Cannot open the file!\n");
         exit(0); //��ֹ����
     }

     printf("Please intpit the sentences you want write: ");
     ch = getchar(); //����getchar()һ���������ݣ���һ������scanf�Ļ���
     ch = getchar();

     while( ch != EOF)//������ǽ�����EOF�ͼ���д��
     {
         fputc(ch, fp);//w���ļ�д���ַ�
         ch = getchar();
     }

     fclose(fp); //�ر��ļ����п��й�
}
