/**
�ݹ�:�ڵ����и������Ĺ������ֵ������������������ѭ��
     һ�������˳����������˳����˳�����һ����if�ж����
����:int f(int x)
     {
     int y, z;
     z=f(y);    //��һ�ε��ú�������
     return(2*z);
     }

����Ŀ�õݹ�������Ľ׳�s=(2^2)!+(3^2)!
��5!����4!*5,��4!=3!*4
��������ݹ鹫ʽ��ʾ:
          n=1        (n=0,1)
          n*(n-1)!   (n>1)
**/

#include <stdio.h>
int recurison(int n);//����������

void main()
{
  int n, result;
  printf("please a number :\n");
  scanf("%d", &n);
  result = recursion(n);
  printf("%d! = %d", n, result);
}

int recursion(int n)//���庯���������ǵݹ�
{
    int temp;//temp ��ʱ
    if(n < 0)//if-elseif-else���
    {
        printf("intput error");
    }
    else if(n == 0 || n == 1)//�˳�����
    {
        temp = 1;
        return temp;//return ���ظ����������ʽ����Ľ��
    }
    else
    {
        temp = recursion(n-1)*n;//�ݹ飬�������ù�ʽ�����������˳�
        return temp;
    }


}









