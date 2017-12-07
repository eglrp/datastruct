LinkList DisCreat(LinkList &A) {
    LinkList B = (LinkList)malloc(sizeof(LNode));
    LNode *ra = A;
    LNode *rb = B;
    LNode p = A->next;
    ra->next = null;
    rb->next = null;

    for(int i = 1; p != null; i++) {
        if(i%2 != 0) {
            ra->next = p;
            ra = ra->next;
        } else {
            rb->next = p;
            rb = rb->next;
        }
        p = p->next;
    }

    ra->next = null;
    rb->next = null;
    return B;
}