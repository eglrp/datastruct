bool Symmetry(DLinkList &L) {
    DNode *p = L->next;
    DNode *q = L->prior;
    while(p !=q && p->next != q) {
        if(p->date == q->date) {
            p = p->next;
            q = q->prior;
        }
        else {
            return false;
        }
    }
    return true;
}