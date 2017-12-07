void Reverse(SqList & L, int left, int right){
    if(left > right || right >= L.length) {
        return;
    }

    int mid = (left + right)/2;
    Elemtype temp;
    for(int i = 0; i < mid - 1; i++) {
        temp = L.date[left + i];
        L.date[left + i] = L.date[right - i];
        L.date[right - i] = temp;
    }
}

void Exchange(SqList &P, int m, int n) {
    Reverse(P, 0, m+n-1);
    Reverse(p, 0, n - 1);
    Reverse(P, n, m + n - 1);
}