/**
ͳ�ƿո�,�Ʊ�,���з��ĳ���,�����ű�����asc��
���ڲο���4.1�ǵ���
**/
#include <stdio.h>
void main()
{
    int c, nb, nt, nl;
    c = nb = nt = nl = 0;
    while(c = getchar() != EOF)//getchar()��ѭ�����������ַ�
    {                        //��EOF�����˳� F6�� crtl+z
        if(c == '6')
        {
             ++nb; //nb=+1
        }
        if(c == '\t')
        {
            ++nt; //nt=+1
        }
        if(c == '\n')
        {
            ++nl;//nl=+1
        }
    }
 printf("%d %d %d\n", nb, nt, nl);
}
