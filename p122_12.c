void SearchXPrant(BiTree bt, ElemType x) {
    if(bt == null || bt->data == x) {
        return;
    }

    InitStack(S);
    BiTNode *p = bt;
    BiTNode *temp = null;
    while(p != null || !IsEmpty(S)) {
        if(p != null) {
            push(S, p);
            p = p->lchrild;
        }
        else {
            GetTop(S, p);
            if(p->rchrild != null) {
                push(S, p->rchrild);
                p = p->lchrild;
            }
            else {
                pop(S, p);
                if(p == x) {
                    while(!IsEmpty(S)) {
                        print(s->data);
                    }
                    return;
                }
                r = p;
                p = null;
            }
        }
    }
}