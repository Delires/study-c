/**************************************************************
循环语句：在给定条件成立时，反复执行某段程序，直到条件不成立为止。一般用i++构成条件
          给定条件         称为     循环条件
          反复执行的程序   称为     循环体



循环语句分为
1）goto语句 和 if语句 构成循环
2）while语句
3）do-while语句
4）for语句
按照程序的需要进行选择
****************************************************************/

#include <stdio.h>
int main()
{
	char c;
	while(1)
	{
		c=getchar();
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			c=c+4;
			if(c>'Z'&&c<='Z'+4||c>'z')
				c=c-26;
		}
		printf("%c",c);
	}
	printf("\n");
	return 0;
}
