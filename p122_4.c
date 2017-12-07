void InverLevel(BiTree T) {
    if(T == null) return;

    BiTNode p;
    InitStack(S);
    InitQueue(Q);

    EnQueue(Q, T);
    while(!isEmpty(Q)) {
        DeQueue(Q, p);
        push(S, p);

        if(p->rchrild != null)
            EnQueue(Q, p->rchrild);

        if(p->lchrild != null)
            EnQueue(Q, p->lChrild);
    }

    while(!isEmpty(S)) {
        pop(S, p);
        visit(p->data);
    }
}