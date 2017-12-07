typedef struct LNode {
    char data;
    struct LNode *next;
}LNode, *LinkList;

int listlen(LinkList L) {
    LNode *p = L;
    int i = 0
    while(p != null) {
        p = p->next;
        i++;
    }

    return i;
}

LNode* find_addr(LinkList &str1, LinkList &str2) {
    int m = listlen(str1);
    int n = listlen(str2);
    LNode *p1 = str1->next;
    LNode *p2 = str2->next;

    while(m < n) {
        p2 = p2->next;
        n--;
    }

    while(m > n) {
        p1 = p1->next;
        m--;
    }

    while(p1 != null) {
        if(p1 == p2) {
            return p1;
        }

        p1 = p1->next;
        p2 = p2->next;
    }

    return null;
}