int BTwidth(BiTree bt) {
    int max = 0;
    int temp = 0;
    BiTNode *p = bt;
    BiTNode *r = bt;
    BiTNode *last = bt;

    InitQueue(Q);
    EnQueue(Q, p);
    max ++;
    while(!IsEmpty(Q)) {
        DeQueue(Q, p);
        if(p->lchrild != null) {
            EnQueue(Q, p->lchrild);
            last = p->lchrild;
            temp ++;
        }
        if(p->rchrild != null) {
            EnQueue(Q, p->rchrild);
            last = p->rchrild;
            temp ++;
        }
        if(p == r) {
            p = last;
            if(max < temp) {
                max = temp;
            }
            temp = 0;
        }
    }
    return max;
}