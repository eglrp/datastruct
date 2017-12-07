void MergeList(LinkList &La, LinkList &Lb) {
    LNode *pa = La->next;
    LNode *pb = Lb->next;
    La->next = null;
    LNode *p,*q;

    while(pa != null && pb != null) {
        if(pa ->date < pb->date) {
            p = pa;
            pa = pa->next;
        } else {
            p = pb;
            pb = pb->next;
        }
        p->next = La->next;
        La->next = p;
        p = null;
    }

    if(pa != null) {
        p = pa;
    } else if(pb != null) {
        p = pb;
    }
    while(p != null) {
        q = p;
        p = p->next;
        q->next = La->next;
        La->next = q;
    }
    free(Lb);
}