/*****
do-while��� �� 1�ӵ�100

do-while������ʽΪ:    do
                         {���;}
                         while(���ʽ);   �˴��зֺ�
***********/
#include <stdio.h>
void main()
{
    int sum=0, i;//���붨����ʼֵΪ0 �� i��1��ʼ
    i=1;
    do
        {
        sum=sum+i;
        i++;
        }
    while(i<=100);
    printf("%d\n", sum);

}
