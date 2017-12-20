void FindPath(Graph &G, int u, int v, int path[], int d) {
    d ++;
    path[d] = u;
    visited[u] = true;
    if(u == v) {
        print(path[]);
    }

    p = G->adjlist[u].firstarc;
    while(p != null) {
        w = p->adjvex;
        if(!visited[w]) {
            FindPath(G, w, v,path[], d);
        }
        p = p->nextarc;
    }
    visited[u] = false;
}