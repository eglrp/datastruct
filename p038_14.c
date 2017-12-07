LinkList Get_Common(LinkList &A, LinkList &B) {
    LinkList C = (LinkList)malloc(sizeof(LNode));
    C->next = null;
    LNode *pa = A->next;
    LNode *pb = B->next;
    LNode *pc = C;

    while(pa != null && pb != null) {
        if(pa->date < pb->date) {
            pa = pa->next;
        } else if(pa->date > pb->date) {
            pb = pb->next;
        } else if(pa->date == pb->date) {
            pc->next = (LinkList)malloc(sizeof(LNode));
            pc = pc->next;
            pc->next = null;
            pc->date = pa->date;

            pa = pa->next;
            pb = pb->next;
        }
    }
    return C;
}