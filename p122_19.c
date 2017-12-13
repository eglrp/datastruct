typedef struct BiTNode {
    int weight;
    struct BiTNode *left, *right;
} BiTNode, *BiTree;
int WPL(BiTree bt) {
    return wpl_preorder(bt, 0);
}

int wpl_preorder(BiTNoder T, int deep) {
    static wpl = 0;
    if(T->left == null && T->right == null) {
        return wpl += T->weight * deep;
    }
    if(T->left != null) {
        wpl_preorder(T->left, deep ++);
    }
    if(T->right != null) {
        wpl_preorder(T->right, deep ++);
    }

    return wpl;
}