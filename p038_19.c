void Del_Min(LinkList &L) {
    LNode *min = L->next;
    LNode *pre = L;
    LNode *p = L;

    while(L->next != L){
        while(p->next != L) {
            if(p->next->date < min->date) {
                min = p->next;
                pre = p;
            }
        }

        print(min->date);
        pre->next = min->next;
        free(min);
        pre = L;
        min = L->next;
    }
    free(L);
}