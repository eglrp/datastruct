bool visited[MAX_VERTEX_NUM];

void BFSTraverse(Graph G) {
    for(int i = 0; i < G.vexnum; i ++) {
        visitled[i] = false;
    }

    for(int v = 0; v < G.vexnum; v ++) {
        if(!visited[v]) {
            BFS(G, v)
        }
    }
}

void BFS(Graph G, int v) {
    visit(v);
    visited[v] = true;
    EnQueue(Q, v);

    while(!IsEmpty(Q)) {
        DeQueue(Q, v);
        for(w=FirstNeighbor(G, v); w>=0; w=NextNeighbor(G, v, w)) {
            if(!visied[w]) {
                visit(w);
                visited[w] = true;
                EnQueue(Q, w);
            }
        }
    }
}