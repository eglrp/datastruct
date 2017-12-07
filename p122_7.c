bool Complete(BiTree T) {
    InitQueue(Q);

    BiTNode *p = T;
    EnQueue(Q, p);

    while(!IsEmpty(Q)) {
        DeQueue(Q, p);
        if(p != null) {
            EnQueue(Q, p->lchrild);
            EnQueue(Q, p->rchrild);
        }
        else {
            while(!IsEmpty(Q)) {
                DeQueue(Q, p);
                if(p != null) return false;
            }
        }
    }

    return true;
}