/**
2. #ifndef ��ʶ��     û�����ʶ��,��ִ�г���1ȥ����,�����ִ�г���2
   ����1
   #else
   ����2
   #endif
**/
#include <stdio.h>

#define CORRECT "caopengxiang"

void main()
{
    char str[40];
    int cmp(char *str1, char *str2);    //����һ���������ַ��������ĺ���

    printf("please intput name of you best love man:\n");
    scanf("%s", &str);

#ifndef CORRECT//���û�ж���CORRECT ��ִ�г����ٶ���һ��
               //���ɾ����ͷ�� #define CORRECT "caopengxiang" ��ξ�������
 #define CORRECT "caopengxiang"//�����
#endif


     if( cmp(str, CORRECT) == 0 )
     {
         printf("\n\n\n\n you are smart girl \n\n\n\n");
     }
     else
     {
         printf("\n\n\n\n you are sun of bitch, fool shit \n\n\n\n");
     }
}

int cmp(char *str1, char *str2) //���庯��,�Ƚ��ַ�
{
    int i=0, j=0;
    while (1)
    {
        i++;
        j++;
        if(str2[j] == str1[i])
        {
            return 0;
        }
        else
        {
            return 10;
        }
    }
}

