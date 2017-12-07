typedef struct LNode {
    int data;
    struct LNode *link;
}LNode, *LinkList;

void func(LinkList head, int n) {
    LNode *p = head->link;
    LNode *pre = head;
    int *temp = (int)malloc(sizeof(int)*(n+1));
    for(int i = 0; i < n+1; i++) {
        *(temp+i) = 0;
    }

    int data;
    while(p != null) {
        data = p->data > 0? p->data:-p->data;
        if(*(temp + data) == 0) {
            *(temp + data) = 1;
            pre = p;
            p = p->link;
        } else {
            pre->link = p->link;
            free(p);
            p = pre->link;
        }
    }

    free(temp);
}