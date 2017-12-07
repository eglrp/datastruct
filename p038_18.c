LinkList Link(LinkList h1, LinkList h2) {
    LNode *ph1 = h1;
    LNode *ph2 = h2;

    while(ph1->next != h1) {
        ph1 = ph1->next;
    }

    while(ph2->next != h2) {
        ph2 = ph2->next;
    }

    ph1->next = h2;
    ph2->next = h1;

    return h1;
}