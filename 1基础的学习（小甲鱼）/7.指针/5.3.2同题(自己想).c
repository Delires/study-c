/**
������ţ����ѧ����4�ųɼ�
����ָ�� *p = max;
��ά����ָ�붨�壺����˵����(*ָ�������)[����]   �Ѷ�ά���鰴һά���壬������Ӹı��У�������Ӹı���
**/
#include <stdio.h>

void main()
{
    double a[3][4] = {{15.0,26.3,78.5,55.2},{55.2,49.3,78.2,99.5},{12.0,89.6,75.6,33.8}};
    double *fuck( double(*m)[4], int n );
    // double *fuck() ���庯��ָ��       double(*m)[4] �����ά����ָ��
    double *p;//����ָ�����p
    int m, i;

    printf("pleae int put number:\n");
    scanf("%d", &m);

    p = fuck(a, m); //���뺯��,��pl���ظ�p
    for(i=0; i<4; i++)
    {
        printf("%f\t", *(p+i));   //p=pl=*(m+n), ���� *(p+i)==*(*(m+n)+i) ����������Լӵ�����
                                                //���Դ�ӡ������ÿһ���˵ĸ��Ƴɼ�
    }
    printf("\n\n");

}
double *fuck( double(*m)[4], int n )
{
    double *pl;
    pl = *(m+n);   //m������a���е�ַ��n������
    return pl;
}
