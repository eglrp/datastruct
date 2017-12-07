bool Del_sTot(SeqList &L, Elemtype s, Elemtype t) {
    if(s >= t || L.length == 0) {
        return false;
    }

    int k = 0;
    for(int i = 0; i<L.length; i++) {
        if(L.date[i] < s) {
            k++
        } else if(L.date[i] > t) {
            L.date[k] = L.date[i];
            k++;
        }
    }
    if(k == 0) {
        return false;
    }
    L.length = k;
    return true;
}