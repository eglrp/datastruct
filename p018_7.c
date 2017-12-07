SeqList Merge(SeqList &L1, SeqList &L2) {
    SeqList &L3;
    L3.length = L2.length + L1.length;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < L1.length && j < L2.length) {
        if(L1.date[i]<L2.date[j]) {
            L3.date[k++] = L1.date[i++];
        }else {
            L3.date[k++] = L2.date[j++];
        }
    }

    while(i < L1.length) {
        L3.date[k++] = L1.date[i++];
    }

    while(j < L2.length) {
        L3.date[k++] = L1.date[j++];
    }

    return &L3;
}