/***
while��do-while����
whileʵ��                     while(���ʽ)
                              {���;}
*****/
#include <stdio.h>
void main()
{
    int sum=0, i;
    printf("input number of i\n");
    scanf("%d", &i);
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("%d", sum);
}
/*
do-whileΪ
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=10);

�������ڵ�i>10ʱ while��ִ��ѭ��      ���Ϊ0
                 do-while��ִ��һ��   ���Ϊi
*/
