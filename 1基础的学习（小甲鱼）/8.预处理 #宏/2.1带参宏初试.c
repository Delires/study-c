/**
������ʽΪ:
    #define ����(�βα�) �ַ���
������ʽΪ:
     ����(ʵ�α�)
**/
#include <stdio.h>

#define MAX(a,b) a>b?a:b //������κ� (a,b)���βα�

void main()
{
    int x, y, max;

    printf("intput two number:\n");
    scanf("%d %d", &x, &y);

    max = MAX(x,y); //���� (x,y)ʵ�α������Ǵ���ֵ,����ֱ���滻
                    //ֻҪ����MAX(),��ͻ��Զ��滻��x,y����a,b���ú��滻���
    printf("max is %d", max);
}
