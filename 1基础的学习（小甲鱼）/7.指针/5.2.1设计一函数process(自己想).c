/**
���һ����process,ÿ�ε�������ʵ�ֲ�ͬ�Ĺ��ܡ�
����ab����һ�ε����ҳ�ab��ģ��ڶ�����С�ģ����������

��ʾ:�Ѻ�����ָ����Ϊ����
     ����process����ʱ,ͨ������������С�ĺ���
**/
#include <stdio.h>
void main()
{
    int max(int p, int q);              //�Ѻ�����ַ����use
    int min(int p, int q);
    int add(int p, int q);
    int process( int x, int y, int(*use)() );//��������

    int a, b, c;
    scanf("%d %d", &a, &b);

    c = process(a, b, max);//����max�����ĵ�ַ,�ٰ�ab����max�����ı���
    printf("a=%d b=%d max=%d\n", a, b, c);

    c = process(a, b, min);//����min�����ĵ�ַ,�ٰ�ab����min�����ı���
    printf("a=%d b=%d min=%d\n", a, b, c);

    c = process(a, b, add);//����add�����ĵ�ַ,�ٰ�ab����add�����ı���
    printf("a=%d b=%d add=%d\n", a, b, c);
}

int process( int x, int y, int(*use)() )//����process����
{
      use(x, y); //useָ����������(����)
}

int max(int p, int q) //����max����
{
    int z;
    if(p > q)
    {
        z = p;
    }
    else
    {
        z = q;
    }
    return z; //��z��ֵ����
}

int min(int p, int q) //����min����
{
    int z;
    if(p < q)
    {
        z = p;
    }
    else
    {
        z = q;
    }
    return z; //��z��ֵ����
}

int add(int p, int q) //����add����
{
    int z;
    z = p+q;
    return z;
}
