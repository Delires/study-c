/*
����һ���ַ����ж��Ƿ��Ǵ�д��ĸ�������ת����Сд��ĸ������,ֱ�����
*/
#include <stdio.h>
void main()
{
    char ch;  //����chΪ�ַ���������Ϊÿ���ַ���Ӧ��asc�룬���Ա��붨���������ĸ
    printf("input a character:");
    scanf("%c",&ch);
    ch = (ch>='A' && ch<='Z')?(ch+32):ch; //��д��ĸasc��+32=Сд��ĸasc��
    //ch�ڲ���AZ�����Χ���ch+32�����پ���ch
    printf("transform a character: %c\n", ch);
}


/*
�����ַ���char Ҫ�úò���
�ȿ���Ŀ������Ŀ��������ںͱ�׼�Ա�
*/
