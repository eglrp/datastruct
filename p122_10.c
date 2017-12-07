static int i = 1;
ElemTyp PreNode(BiTree T, int k) {
    if(T == null) return null;

    BiTNode *p = T;
    if(i == k) {
        return p->data;
    }
    i ++;
    BiTNode temp = PreNode(p->lchrild, k);
    if(temp != null) {
        return temp;
    }
    temp = PreNode(P->rchrild, k);
    return temp;
}