void Del_X(SqList &L, Elemtype x) {
    int k = 0;
    for(int i = 0; i < L.length; i++) {
        if(L.date[i] != x) {
            L.date[k] = L.date[i];
            k++;
        }
    }
    L.length = k;
}