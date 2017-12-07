LinkList Get_Common(LinkList &A, LinkList &B) {
    LNode *pa = A->next;
    LNode *pb = B->next;
    LNode *ra = pa;
    LNode *p;

    while(pa != null && pb != null) {
        if(pa->date < pb->date) {
            p = pa;
            pa = pa->next;
            free(p);
        } else if(pa->date > pb->date) {
            p = pb;
            pb = pb->next;
            free(p);
        } else if(pa->date == pb->date) {
            ra->next = pa;
            ra = pa;

            pa = pa->next;
            p = pb;
            pb = pb->next;
            free(pb);
        }
    }
   
    while(pa != null) {
        p = pa;
        pa = pa->next;
        free(p);
    }

    while(pb != null) {
        p = pb;
        pb = pb->next;
        free(p);
    }

    free(pb);
    ra->next = null;
    return A;
}