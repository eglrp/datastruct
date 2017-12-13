LinkList head = null;
LinkNode pre = null;
LinkList PreOrder(BiTree bt) {
    if(bt != null) {
        if(bt->lchrild == null && bt->rchrild == null) {
            if(head == null) {
                head = bt;
                pre = bt;
            }
            else {
                pre->rchrild = bt;
                pre = bt;
            }
        }
        PreOrder(bt->lchrild);
        PreOrder(bt->rchrild);
    }
    return head;
}