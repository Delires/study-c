/*****
continue��� ��ʽ   continue;
continue��� ����   ��������ѭ��������������䣬�ڽ�����һ��ѭ��

break��continue���� continue�ǽ�������ѭ��
                    break����ֹ(����)����ѭ��
*****/
#include <stdio.h>
#include <conio.h>
void main()
{   int r;
    float pi = 3.1415926, area;
    for( r=1; r<=10; r++)
    {
        area=pi*r*r;//Բ�����ʽ
        if(area>100)
        {
            continue;//��������6����ʱ��breakֱ��������continue������ͷ������ʼ
        }
        printf("r=%d, area=%f\n",r ,area);
    }
       getch();//�����������һ���ַ��Ż����
}
//
