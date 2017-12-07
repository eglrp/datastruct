bool Del_sTot(SqList &L, Elemtype s, Elemtype t) {
    if(s > t || L.length == 0) {
        return false;
    }

    for(int i = 0,int j = 0; i< L.length; i++) {
        if(L.date[i] < s || L.date[i] > t) {
            L.date[j] = L.date[i];
            j++;
        }
    }
    L.length = j;
    return true;
}