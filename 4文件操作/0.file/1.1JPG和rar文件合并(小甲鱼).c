#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *f_pic, *f_file, *f_finish;
    char pic_name[20], file_name[20], finish_name[20];
    char ch;

    printf("��������Ҫ�ϳɵ�ͼƬ�ļ������ƣ�\n");
    printf("ͼƬ��");
    scanf("%s", &pic_name);
    printf("\n�ļ�����");
    scanf("%s", &file_name);
    printf("\n����Ϊ:");
    scanf("%s", &finish_name);

//���ļ�1
    if( !(f_pic = fopen(pic_name, "rb") ) )//�����ƶ�ȡ��ʽrb
    {
        printf("\n��%s�ļ�ʧ��", pic_name);
        return;//exit(0)
    }

//���ļ�2
    if( !(f_file = fopen(file_name, "rb") ) )//�����ƶ�ȡ��ʽrb
    {
        printf("\n��%s�ļ�ʧ��", file_name);
        return;//exit(0)
    }

//�����ļ�3
    if( !(f_finish = fopen(finish_name, "wb") ) )//��������ʽд��wb��û�о�����
    {
        printf("\n��%s�ļ�ʧ��", finish_name);
        return;//exit(0)
    }

    while( !(feof(f_pic)) )
    {
        ch = fgetc(f_pic);
        fputc (ch, f_finish);
    }
    fclose(f_pic);

    while( !(feof(f_file)) )
    {
        ch = fgetc(f_file);
        fputc (ch, f_finish);
    }
    fclose(f_file);

    printf("\n���ɳɹ���")

    system("pause");


}
