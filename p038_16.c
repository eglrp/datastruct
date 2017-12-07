bool Pattern(LinkList &A, LinkList &B) {
    LNode *pa = A;
    LNode *pb = B;
    LNode *pre = pa;
    while(pa != null && pb != null) {
        if(pa->date == pb->date) {
            pa = pa->next;
            pb = pb->next;
        } else {
            pa = pre->next;
            pb = B;
        }
    }

    if(pb == null) {
        return true;
    }
    else {
        return false;
    }
}