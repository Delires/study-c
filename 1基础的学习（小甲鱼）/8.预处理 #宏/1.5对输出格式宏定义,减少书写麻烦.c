/**
�������ʽ%d%f%s%c���к궨�壬������д�鷳
**/
#include <stdio.h>

#define P printf
#define D "%d\n"
#define F "%f\n"
#define C "%c\n"           //�궨������滻

void main()
{
    char a = 'f';          //("D") ���� ������""�ﲻ�滻
    int b = 68;
    float c = 68.68;
    P(C, a); //printf("%c\n", a);
    P(D, b);
    P(F, c);
}
