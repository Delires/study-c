/* getchar scanf ���ֺ���Ҫ�ڱ����������������� */
int max(int a,int b);
main()
{
    int x,y,z;
    int max(int a,int b);
    printf("input two numbers:\n");/*������������� ��stdio.h ������*/
    scanf("%d%d",&x,&y);           /*scanf������� printf������*/
    z=max(x,y);
    printf("maxmun=%d",z);

}

int max(int a,int b)
{
    if(a>b)return a;
    else  return b;
}


