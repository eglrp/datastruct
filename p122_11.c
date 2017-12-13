void DelXTree(BiTree bt) {
    if(bt != null) {
        DelXTree(bt->lchrild);
        DelXTree(bt->rchrild);
        free(bt);
    }
}

void Search(BiTree bt, Elemtype x) {
    InitQueue(Q);
    BiTNode *p = bt;
    if(p->date == x) {
        DelTree(p);
        return;
    }
    EnQueue(Q, p);
    if(!IsEmpty(Q)) {
        DeQueue(Q, p);
        if(p->lchrild != null) {
            if(p->lchrild == x) {
                DelXTree(p->lchrild);
                p->lchrild = null;
            }
            else {
                EnQueue(Q, p->lchrild);
            }
        }

        if(p->rchrild != null) {
            if(p->rchrild == x) {
                DelXTree(p->rchrild);
                p->rchrild = null;
            }
            else {
                EnQueue(Q, p->rchrild);
            }
        }
    }
}