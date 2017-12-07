int swap(BiTree T) {
    BiTNode *p = T;
    if(p != null) {
        swap(p->lchrild);
        swap(p->rchrild);
        BiTNode temp;
        temp = p->lchrild;
        p->lchrild = p->rchrild;
        p->rchrild = temp;
    }
}