/**
typedef����POINTERΪָ������ָ�����ͣ��ú�����������ֵ
    typedef int (*POINTER)();
                         //��һ��()��ʾ��������ָ��ָ��,ָ������
                         //�ڶ���()�Ǻ�����(),��fund()��()
**/
#if(0)//С����
#include <stdio.h>

typedef void (*POINTER)();

void Found()
{
    printf("I love ���ε�");
}

int main(void)
{
    POINTER p1; //void (*p1)();
    p1 = &Found;//Found()�����ĺ�����ָ��p1
                //����������Ӳ���ȡַ���У�������ַ����������

    (p1)(); //���ú�����p1ָ��Found

    return 0;
}
#endif








#if(1)//�Լ�д

#include <stdio.h>

typedef void (*p)(); //typedef����һ��ָ�����ĵ�ַ

void Fun();

int main(void)
{
    p p1;
    p1 = Fun;
    (p1)();

    return 0;
}

void Fun()
{
    printf("���ε�����");
}
#endif
