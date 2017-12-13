BiTree Ancestor(BiTree root, BiTNode p, BiTNode q, BiTNode r) {
    if(root == null) {
        return null;
    }
    InitStack(S);
    InitStack(temp);
    BiTNode *index = p;
    BiTNode *i = null;

    while(index != null || !IsEmpty(S)) {
        if(index != null) {
            push(S, index);
            index = index->lchrild;
        }
        else {
            GetTop(S, index);
            if(index->rchrild != null) {
                push(S, index);
                index = index->lchrild;
            }
            else {
                pop(S, index);
                if(index->data == p || index == q) {
                    if(IsEmpty(temp)) {
                        CopyStack(S, temp);
                    }
                    else {
                        int a = 0;
                        while(!IsEmpty(temp)) {
                            pop(temp, index);
                            t[a++] = index->data;
                        }
                        while(!IsEmpty(S)) {
                            pop(S, index);
                            for(int j = 0; j <= a; j++) {
                                if(index->data == t[j]) {
                                    r = index;
                                    return r;
                                }
                            }
                            return null;
                        }
                    }
                }
                i = index;
                index = null;
            }
        }
    }
}