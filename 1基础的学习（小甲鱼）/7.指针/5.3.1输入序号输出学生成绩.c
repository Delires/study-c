/**
������ţ����ѧ����4�ųɼ�
�ú���ָ�� ��ά���� ���
**/
#include <stdio.h>
void main()
{
    double score[3][4] = {{60.0, 70.0, 80.5, 90.0}, {56.0, 89.0, 67.0, 88.0}, {34.2, 78.5, 90.6, 40.0}};
                               //�����ά���飬һά��λ�п���ʡ���б��붨��
    double *searcher(double(*pointer)[4], int n );
                               //*sea()���麯��    *pointer[4]��ά����ָ�붨����ʽ������˵����(*ָ�������)[����]
                                                            //�Ѷ�ά���鿴��һά����ȥ���壬�о���һά������
    double *p;
    int i, m;

    printf("please intput number of student:");
    scanf("%d", &m);
    printf("the score of No.%d\n", m);

    p = searcher(score, m);//p�յ�pt��ַ�ķ���ֵ

    for(i=0; i<4; i++)           //��ӡ����4�Ƴɼ�
    {
        printf( "%f\t", *(p+i) );//p=pl=*(m+n), ���� *(p+i)==*(*(m+n)+i) ����������Լӵ�����
    }                                                //���Դ�ӡ������ÿһ���ĸ��Ƴɼ�
    printf("\n\n\n");
}

double *searcher(double(*pointer)[4], int n )//������score���ݸ�pointer(�����0�ĵ�ַ��ʼ)  ��ͬѧ���m���ݸ�n
{
    double *pt;
    pt = *(pointer + n);         //��ά������������У�pointer��0�п�ʼ���ټ�����n
    return pt;                  //֮���ٰ�ֵpt����(�洢���ǵ�ַ)
}
