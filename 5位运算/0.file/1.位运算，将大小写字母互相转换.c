/**
����Ҫ���Ŵ��ܣ����벻����ĸ��������
��ĸ������ASC�����ʽ���棬λ����ı�ASC��
��A 0100 0001    B 0100 0010
  a 0110 0001    b 0110 0010
��дת��Сд
            A~O ����λ0100��Ϊ0110  11011111
            P~Z ����λ0101��Ϊ0111

�ر�ע�⣡����Ѷ����ƻ�Ϊʮ����������&|����
**/
#include <stdio.h>
int main(void)
{
    char charact, change;
loop:

    printf("please intput a character:");
    scanf("%c", &charact);
    if( (64<charact&&charact<91) || (96<charact&&charact<123) ) //��('A'<charact&&charact<'Z') || ('a'<charact&&charact<'z')
    {
        if(64<charact&&charact<91)
        {
            change = 32|charact;     //����Ѷ����ƻ�Ϊʮ����������&|
            printf("%c\n", change);
        }
        else if('a'<=charact&&charact<='z')
        {
            change = 223&charact;
            printf("%c\n", change);
        }
    }
    else
    {
        printf("You are foolish\n");
    }

    // charact = getchar(); //�س�Ҳ��һ���ַ�Ҳ�ж�Ӧasc��
    // putchar(charact);    //�����������������س���asc��

    fflush(stdin);          //ʹ������������������ѻس������
    goto loop;
             //goto���Ҫд�ڱ���������

}

/**ֱ���õ���λ�ж�
if(ch&32)

**/
