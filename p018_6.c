void Del_Sam(SeqList &L) {
    if(L.length == 0) {
        return;
    }

    int j = 0;
    for(int i = 1; i<L.length; i++) {
        if(L.date[j] != L.date[i]) {
            L.date[++j] = L.date[i];
        }
    }
    L.length = j+1;
}