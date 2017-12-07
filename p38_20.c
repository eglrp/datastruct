DLinkList Locate(DLinkList &L, ElemType x) {
    DLNode *p = L->next;
    DLNode *pre = L;

    while(p != null && p->date != x) {
        pre = p;
        p = p->next;
    }
    if(p == null) {
        print("Not Found");
        exit(0);
    }

    p->freq++;
    pre->next = p->next;
    p->next->pred = pre;

    while(p->freq <= pre->fred && pre != L) {
        pre = pre->pred;
    }
    p->next = pre->next;
    pre->next = p;
    p->next->pred = p;
    p->pred = pre;

    return p;
}