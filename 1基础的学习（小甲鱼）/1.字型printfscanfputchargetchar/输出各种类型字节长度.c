#include <stdio.h>
void main()
{
    int a;    /* aΪ���ͻ����� */
    long b;   /* bΪ���ͳ����� */
    float f;  /* fΪ�����͵����� */
    double d; /* dΪ������˫���� */
    char c;   /* cΪ�ַ���       */
    printf("\n int:%d\n long:%d\n float:%d\n double:%d\n char:%d\n",
            sizeof(a), sizeof(b), sizeof(f), sizeof(d), sizeof(c));
            /* һ��ֻҪû���Ͳ�����������Կ��Է�����д*/
            /* printfð�����пո��Ҫ��ӡ���ո� */
}
/* sizeof() �ַ����Ⱥ��� ��ӡ�����������Ǽ����ֽ� 1byte=8bit */
/* printfð���� %d�Ƕ������ \n�ǻس��� ���඼��Ҫ��ӡ������ */
