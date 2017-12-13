BiTree InPostPre(BiTree T, BiTNode p) {
    if(T == null) {
        return null;
    }

    if(p->rtag == 0) {
        return p->rchrild;
    }
    else if(p->ltag == 0) {
        return p->lchrild;
    }
    else {
        while(p->ltag == 1 && p != null) {
            p = p->lchrild;
        }
        if(p->ltag == 0) {
            return p->chrild;
        }
        else {
            return null;
        }
    }
}