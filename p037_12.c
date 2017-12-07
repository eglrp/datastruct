LinkList Del_Sam(LinkList &L) {
    LNode *p,*q;
    LNode *temp;
    p = L;
    q = L->next;
    while(q != null) {
        if(p->date != q->date) {
            p->next = q;
            p = q;
            q = q->next;
        } 
        else {
            temp = q;
            q = q->next;
            free(temp);
        }
    }
    return L;
}