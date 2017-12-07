void PostOrder(BiTree T) {
    InitStack(S);
    BiTNode p = T;
    BiTNode r = null;

    while(p != null || !isEmpty(S)) {
        if(p != null) {
            push(S, p);
            p = p->lchrild;
        } else {
            getTop(S, p);
            if(p->rchrild != null && p->rchrild != r) {
                p = p->rchrild;
                push(S, p);
                p = p->lchrild;
            }
            else {
                pop(S, p);
                visit(p);
                r = p;
                p = null;
            }
        }
    }
}