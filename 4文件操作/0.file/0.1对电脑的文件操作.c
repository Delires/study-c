/**
�Ե��Ե��ļ����в���
�ļ���(fopen����)
    ����������ʽ:
           FILE *fp;
           fp = fopen("�ļ���", "ʹ�÷�ʽ")

                   //�ļ�����ʽΪ"E:\\xxx.x"
                   //"ʹ�÷�ʽ"��ר�ŵı���Ӧ

**/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;//��׼���

//���û���ļ��ʹ�ӡCan not
    if( !(fp = fopen("E:\\fish.text", "w" )) ) // ע����˫"\"
    {                   //w��ʽ�����򿪵��ļ������ڣ��ͽ���һ���ļ�
        printf("Can not open H:\\fish.text\n");
        system("pause");
    }

//���ļ��ʹ�ӡSuccess
    else
    {
        printf("Open success!\n");
    }
}
