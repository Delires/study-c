#include <stdio.h>

#define CORRECT "caopengxiang"

void main()
{
    char str[40];
    int cmp(char *str1, char *str2);    //����һ���������ַ��������ĺ���

    printf("please intput name of you best love man:\n");
    scanf("%s", &str);

#ifndef CORRECT//���û�ж���CORRECT ��ִ�г����ٶ���һ��
 #define CORRECT "caopengxiang"//�����
#endif
     if( cmp(str, CORRECT) == 0 )
     {
         printf("\n you are smart girl \n");
     }
     else
     {
         printf("\n you are sun of bitch, fool shit \n");
     }
}

int cmp(char *str1, char *str2) //���庯��,�Ƚ��ַ�
{
    int i=0, j=0;
    while(str1[i])
    {
        while( str2[i]=str1[j])
        {
            i++;
            j++;
            if( !str2[j])
            {
                return 0;
            }
        }
        j = 0;
        i++;
    }
    return -1;
}
