/***
while��do-while����
do-whileʵ��
                          do
                          {���;}
                          while(���ʽ);
*****/
#include <stdio.h>
void main()
{
    int sum=0, i; //����sum��ֵΪ0 ��Ϊi�Ƕ������룬���Բ��ö���i��ֵ
    printf("input numer of i\n");
    scanf("%d", &i);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=10);                    //i=0  ѭ��11��  sum=1+2+3+5+6+7+8+9+10
    printf("%d", sum);               //i=1  ѭ��10��  sum=1+2+3+5+6+7+8+9+10
}                                    //i=2  ѭ��9��   sum=1+2+3+5+6+7+8+9
/*
whileΪ
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }

�������ڵ�i>10ʱ while��ִ��ѭ��      ���Ϊ0
                 do-while��ִ��һ��   ���Ϊi
*/
