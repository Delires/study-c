 /*
����һ���ַ����ж��Ƿ��Ǵ�д��ĸ�������ת����Сд��ĸ������,ֱ�����
*/
/*
�Լ�˼·
�ַ��� �϶�Ҫ����char
if else���
asc���д��ĸ��32=Сд��ĸ
����ж��Ƿ�Ϊ��д��ĸ���������Ƿ���'A''Z'֮�� FUCK>='A'&&FUCK<='Z'
*/
#include <stdio.h>
void main()
{                   //���еĳ��������������
  char fuck;
  scanf("%c", &fuck);
  if(fuck>='A'&&fuck<='Z')
  {
      printf("%c\n", fuck+32);
  }
  else
  {
      printf("%c\n", fuck);
  }
}
