/*************
�� goto��� �� if��乹��ѭ�� ��1��100�ĺ�

��ʽΪ    goto �����;
          �����:xxxxx;
************/
#include <stdio.h>
void main()
{
    int i, sum=0;   //����sumΪ0
    i=1;
loop: if(i<=100)    //loop�Ǳ�ʶ��
     {
       sum=sum+i;   //sumÿ��һ�ζ��ḳֵ���µ�sum,sum�ڲ��ϱ仯��i���ϼ�1
       i++;
       goto loop;   //ִ�����ڻص�loop ����������ʱ���
     }
printf("%d\n", sum);
}
