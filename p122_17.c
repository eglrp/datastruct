bool similar(BiTree bt1, BiTree bt2) {
    if(bt1 == null && bt2 == null) {
        return true;
    }
    else if(bt1 == null || bt2 == null) {
        return false;
    }
    else {
        bool b1 = similar(bt1->lchrild, bt2->lchrild);
        bool b2 = similar(bt1->rchrild, bt2->rchrild);
        return b1 && b2;
    }
}