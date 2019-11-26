/**
插入链表函数
**/
struct student *insert(struct student *head, struct student *stu_2)
{
    struct student *p0, *p1, *p2;
    p1 = head;
    p0 = stu_2;

    if(head == NULL)
    {
        head = p0;
        p0->next = NULL;
    }
    else
    {
        while( (p0->num > p1-num) && (p1-next != NULL)
              {
                  P2 = P1;
                  P1 = P1-next;
              }
        if(p0->num <= p1->num)
            {
                if(p1 == head) //p1表头，插p1前
                {
                    head = p0;
                    p0->next = p1;
                }
                else //查中间
                {
                    p2->next = p0;
                    p0->next = p1;
                }
            }
        else//插最后
        {
            p1->next = p0;
            p0->next = NULL;
        }
        n = n+1; //多一个
        return head;//再把指针传递回去
    }
}
