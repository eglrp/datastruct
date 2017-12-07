LinkList DisCreat_N(LinkList &A) {
    LinkList B = (LinkList)malloc(sizeof(LNode));
    B->next = null;
    LNode *ra = A;
    LNode *p = A->next;
    LNode *q;

    while(p != null) {
        //先执行A链表的插入
        ra->next = p;
        ra = p;
        p = p->next;

        //再执行B链表的插入
        q = p->next;
        p->next = A->next;
        A->next = p;
        p = q;
    }
    ra->next = null;

    return B;
}