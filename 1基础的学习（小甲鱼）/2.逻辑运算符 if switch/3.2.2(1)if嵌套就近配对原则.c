/*
���˽�����Ƕ�� if���Ƕ�� �� if-elseǶ�� �󣬵�Ƕ�׹���ʱ�����ֶ��if�Ͷ��elseʱ�������ĸ�if���ĸ�else��Ծʹ������⡣
����������ͽ����ԭ��
��  if(���ʽ1)
    if(���ʽ2)
    {���1��}
    else
    {���2��}
��ô��else���׺��ĸ�if����أ�������ifǶ��if-else��if������if-elseǶ��if��
����� if-elseǶ��if��else����һ��if��һ�ԣ�����Ǿͽ����ԭ��
�ͽ����ԭ����ǣ�else��������Ǹ�if��һ��
*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("please intput A,B:");
    scanf("%d%d", &a, &b);
    if(a!=b)                      //�ɾͽ����ԭ�� if-elseǶ�׽��� if��else��if��
    if(a>b)                       //��!=�ǱȽϷ��е� ������ ����˼
        {printf("A>B\n");}        //�м���if �� else��һ��
    else
        {printf("A<B\n");}
    else
        {printf("A=B\n");}

}
/*������˼Ϊ�����a������b���㣬ִ�����1�����1Ϊ���a����b���A>B,�������A<B��
              ���a������b�����㣬���A=B
*/
