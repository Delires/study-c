#include <stdio.h> /*#include*/
void main()
{
    short  a, b; /*short ��Ϊ int ���ֵ�᲻ͬ*/
    a = 32767;
    b =  a+1;
    printf("%d, h%d\n",  a ,b);   /*printf("\n", d, c)*/
}

/*����� int a, b ���Ϊ a=32767 b=32768*/
/*����� short a, b ���Ϊ a=32767 b=-32768*/
/*�������ν�ġ����������*/
/*��codeblocke�������� intռ4type 4*8=32bit 2^32 =4294967296 ��һ��պð���32768*/
/*shortռ2type 2*8��16 2^16=65536 ��һ��-32678~32677 ������32678 �����������  */
/*int/short/long/unsigned �޷����泬���䷶Χ����*/
