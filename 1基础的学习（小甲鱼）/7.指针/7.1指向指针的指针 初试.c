/**
���Ѱַ
**/
#include <stdio.h>

void main()
{
     char *name[] = {"Fish.com", "www.fish.com", "home.fishi.com","thank you"};
                   //ָ������*nameÿһ������Ԫ�� ָ�� �ַ������׵�ַ
                   //char *name ��1��ָ��Ԫ��ָ��"Fish.com"���׵�ַ,��2��ָ��Ԫ��ָ��"www.fish.com"���׵�ַ����������
                   //�ַ���ͨ����д���ȣ���char *name[] д��char *name[4]Ҳ��
     char **p;
            //����һ�� ָ��ָ�� ��ָ��
            //**pָ��ָ��*p��ָ��*p��ָ��һ������
     int i;

     for(i=0; i<4; i++)
     {
         p = name + i; //ָ�����name��ֵ ���� ָ��ָ�������ָ��
         printf("%s\n", *p);//����ֱ��ȡָ��name��ֵ������name��ֵ��p������ȡp��ֵ==ȡname��ֵ
                                                //��һ�����Ѱַ�Ĺ���

     }
}
