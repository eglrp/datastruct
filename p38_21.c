typedef int ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *link;
}LNode, *LinkList;

int Search_k(LinkList list, int k) {
    LNode *p = list;
    LNode *q = list;
    int count = 1;
    while(p != null) {
        if(count > k) {
            q = q->link;
        } else {
            count++;
        }
    }
    if(count <= k) {
        return 0;
    }

    printf("%d",q->data);
    return 1;
}