/**
�궨����Զ��������,�ں����ʱ,����Щ�����ֻ���Դ������

strcat �ַ���ƴ�Ӻ���
strcat(m,c); ���ַ���cƴ�ӵ�m��
������: #include <string.h>
**/
#include <stdio.h>
#include <string.h>

#define COPY(s1,s2,s3,s4) strcat(strcat(strcat(s1, s2),s3),s4)
                          //�궨���ַ���������

void main()
{
    char a[] = "TMD";
    char b[] = "shabi ";
    char c[] = "shi ";
    char d[] = "hemengdi!"; //b,c,d��ƴ��a��


    COPY(a,b,c,d);
    printf("\n\t%s\n\t%s\n\t%s\n\t%s",b, c, d, a);

}

