#include <stdio.h>

void
 exchange(int *m, int *n);//��������,����Ҫ�ͳ����������
            //�����ʱ������ָ�����Ҫ��*
void main()
{
    int a, b;
    int *p1, *p2;

    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;//����ʱ*
    if(a<b)
    {
        exchange(p1, p2);//��p1��p2ʹ�ú���
    }
    printf("%d %d\n", a, b);
    printf("max=%d min=%d\n", *p1, *p2);
}
void exchange(int *m, int *n)//���庯��
            //p1f����m p2����n
{
    int p;
    p=*m; //p=a
    *m=*n;//a=b
    *n=p;//b=p=a

}
