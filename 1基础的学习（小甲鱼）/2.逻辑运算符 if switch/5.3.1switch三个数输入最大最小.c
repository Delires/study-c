/*
switc���
��������������������������С��
��ΪҪǣ���Ƚϣ�����һ��Ҫ��if-else�ж����
*/
#include <stdio.h>
void main()
{
    int a, b, c, max, min; //��ΪҪ�ҳ�������С������ҲҪ����max��min
    printf("intput three numbers:");
    scanf("%d%d%d", &a, &b, &c);  //����int��Ӧ%d ������float��Ӧ%f
    if(a>b)   //if(���ʽ){���1}else{���2}
    {         //����ab���Ƚ�
        max=a;
        min=b;
    }
    else
    {
         max=b;
        min=a;
    }
    if(max<c)//����c��max min���Ƚ�
    {
        max=c;
    }
    else          //else�������Ƕ��һ��if���
        if(c<min) //if��䣬���if���ʽ������ִ����䣬����������
    {
        min=c;
    }
    printf("min=%d\nmax=%d\n", min, max);
}
