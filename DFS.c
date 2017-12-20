bool visited[MAX_VERTEX_NUM];

void DFSTraverse(Graph G) {
    for(int i = 0; i < G.vexnum; i++) {
        visited[i] = false;
    }

    for(int v = 0; v < G.vexnum; v++) {
        if(!visited[v]) {
            DFS(G, v);
        }
    }
}

void DFS(Graph G, int v) {
    visit(v);
    visited[v] = true;
    for(w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) {
        if(!visited[w]) {
            DFS(G, w);
        }
    }
}