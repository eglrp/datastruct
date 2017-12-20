bool visited[MAX_VEX_NUM];

void DFS_Non_RC(Graph &G) {
    int w;
    InitStack(S);
    for(int i = 0; i < G.vexnum; i ++) {
        visited[i] = false;
    }

    push(S, 0);
    visited[0] = true;

    while(!IsEmpty(S)) {
        v = pop(S);
        visit(v);

        for(w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) {
            if(visited[w] != true) {
                push(S, w);
                visited[w] = true;
            }
        }
    }
}