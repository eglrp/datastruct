BiTree PreInCreat(Elemtyp A[], ElemType B[], int l1, int n1, int l2, int n2) {
    BiTNode bt = (BiTNode*)malloc(sizeof(BiTNode));
    bt->date = A[l1];

    int index;
    for(index = 0; B[index] != bt->date; index++);
    int llen = index - l2;
    int rlen = n2 - index;

    if(llen != 0) {
        bt->lchrild = PreInCreat(A, B, l1 + 1, l1 + llen, l2, l2 + len - 1);
    }
    else {
        bt->lchrild = null;
    }

    if(rlen != 0) {
        bt->rchrild = PreInCreat(A, B, h1 - rlen + 1, h1, h2 - rlen + 1, h2);
    }
    else {
        bt->rchrild = null;
    }

    return bt;
}