bool Del_Min(SqList &l) {
    if(l.length == 0) {
        return false;
    }

    Elemtype temp = l[0];
    int index = 0;
    for(int i = 0; i<l.length; i++) {
        if(temp > l[i]) {
            temp = l[i];
            index = i;
        }
    }

    l[index] = l[l.length - 1];
    l.length --;
    return true;
}