/**
���±��ַ�������ĸ˳��(��С����)���
�õ�ָ��������ָ�� �� �ַ���   ������strcmp()���������  ��������������ļ�

һάָ�����鶨��: ���ͷ� *������ [���鳤��]
�ַ�������:char a[]=""
           char *a = ""     char *a;
                            a = " ";
������: strcmp
��  ��: ���Ƚ�
��  ��: int strcmp(char *str1, char *str2);
����ͷ�ļ�:#include <string.h>

**/
#include <stdio.h>
#include <string.h>

void main()
{
    void sort(char *name[], int n);
    void print(char *name, int n);

    char *name[] = {"Fish.com", "www.fish.com", "home.fishi.com","thank you"};
                   //ָ������*nameÿһ������Ԫ�� ָ�� �ַ������׵�ַ
                   //char *name ��1��ָ��Ԫ��ָ��"Fish.com"���׵�ַ,��2��ָ��Ԫ��ָ��"www.fish.com"���׵�ַ����������
                   //�ַ���ͨ����д���ȣ���char *name[] д��char *name[4]Ҳ��
    int n =4;

    sort(name ,n);
    print(name, n);
}

void sort(char *name[], int n)
{
    char *temp;
    int i, j, k;

    for(i=0; i<n-1; i++)
    {
        k = i;
        for(j=i+1; j<n; j++)
        {
            if( strcmp(name[k], name[j])> 0)//��name[k] > name[j]
            {
                k = j;
            }
            if(k != i )
                {
                    temp = name[i];
                    name[i]=name[k];
                    name[k]=temp;
                }
        }
    }

}

void print(char *name, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s\n", name[i]);
    }
}


