void Reverse(SqList &L) {
    if(L.length == 0)
        return;
    Elemtype temp;
    for(int i = 0; i < L.length/2; i++) {
        temp = L.date[i];
        L.date[i] = L.date[L.length - i - 1];
        L.date[L.length -i - 1] = temp;
    }
}