int DosnNotes(BiTree T) {
    BiTNode *p = T;
    if(p == null) return 0;

    if(p->lchrild != null && p->rchrild != null) {
        return DosnNotes(p->lchrild) + DiosnNotes(p->rchrild) + 1;
    }
    else {
        return DosnNotes(p->lchrild) + DisonNotes(p->rchrild);
    }
}