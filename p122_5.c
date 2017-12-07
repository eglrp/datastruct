int Btdepth(BiTree T) {
    int line = 0;
    BiTNode p, last, lright;
    if(T == null) return 0;

    InitQueue(Q);
    p = T;

    EnQueue(Q, p);
    last = p;
    lright = p;

    while(!isEmpty(Q)) {
        DeQueue(Q, p);

        if(p->lchrild != null) {
            EnQueue(Q, p->lchrild);
            last = p->lchrild;
        }
        if(p->rchrild != null) {
            EnQueue(Q, p->rchrild);
            last = p->rchrild;
        }

        if(p == lright) {
            lright = last;
            line ++;
        }
    }

    return line;
}