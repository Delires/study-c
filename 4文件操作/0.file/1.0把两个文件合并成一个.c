/**
Ҫ�õ����ļ���д�ļ�����
    ���ļ�����:fgetc(ph) //���ļ�����
    д�ļ�����:fputc(ch, fp)//���ļ�chд���ļ�
    ���ļ����� feof(fp),�ļ���������1

�򿪹ر��ļ������ļ��� fopen����
                          FILE *fp;
                          fp = fopen(�ļ����� "ʹ�÷�ʽ"); //��fpָ��ָ����ļ�
                                                             //ʹ�÷�ʽ�о�����ַ���Ӧ
�ر��ļ�����  fclose(fp)
**/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2, *fp3; //����ָ���ļ�ָ��
    char ch1, filename1[20];
    char ch2, filename2[20];
    char ch3, filename3[20];

    printf("����ϳɵ��ļ��ͱ�������һ���ļ����ֱ�������ļ�������׺\n");
    printf("����ϳ��ļ����ļ��в���һ�������������·�����ļ�������׺����E:\\\\xxx\\\\xx\n\n\n");

//���ļ�1
    printf("�������һ��ͼƬ�ļ��Ӻ�׺:");
    scanf("%s", &filename1);

    if( !( fp1 = fopen(filename1, "rb")) ) //��ʧ�ܷ���NULL
    {
        printf("\nû�����ͼƬ�ļ�%s�������Ƿ�������ȷ",filename1);
        exit(0);//��������
    }


//���ļ�2
    printf("\n������ڶ���ѹ���ļ��Ӻ�׺:");
    scanf("%s", &filename2);
    if( !( fp2 = fopen(filename2, "rb")) ) //���ļ�������ʧ�ܷ���NULL
    {
        printf("û�����ѹ���ļ�%s�������Ƿ�������ȷ", filename2);
        exit(0);//��������
    }


//�����ļ�3
    printf("\n���������ɵĵ������ļ���+��׺��");
    scanf("%s", &filename3);
    if( !( fp3 = fopen(filename3, "wb") ) )//���ļ���û�򿪾����ɡ�ʧ�ܷ���0
    {
        printf("\n Not creat failu, palease check you filename");
        exit(0);
    }



//�ļ�1д���ļ�3
    while( !feof(fp1) )//��ȡ�귵��1,ȡ�ǲ�ִ��
    {
        ch1 = fgetc(fp1);
        fputc(ch1, fp3);
    }
    fclose(fp1);


//�ļ�2д���ļ�3
    while( !feof(fp2) )
    {
        ch2 = fgetc(fp2);
        fputc(ch2, fp3);
    }
    fclose(fp2);


//д�벢�����ļ�3


     //  ch3 = ch1+ch2;�����Ǵ�����Ϊ��ȡ�������ټӾͲ��Ƕ�������
     // ֱ����ȡ����������д���ļ�3����

    printf("\ncreat successfil��");


}
