#include <stdio.h>

void main(void)  //main�ﲻ�����κη���ֵ�Ͳ���
{
    const char *str = "hemengdi shi zhu";
     //����һ����Ϊstr��ָ����������������ַ������׵�ַ
     //��
    printf("%s\n\n", str);

#if(0)
    str[0]='w'; //�Ƿ�
#endif

    str = "pig is hemengdi"; //ǿ�ư�str�ı�
    printf("%s", str);
}
