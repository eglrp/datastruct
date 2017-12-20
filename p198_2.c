int Enum = 0;
int Vnum = 0;
bool visited[MAX_VERTEX_NUM];

bool isTree(Graph &G) {
    for(int i = 0; i < G.vexnum; i ++) {
        visited[i] = false;
    }

    DFS(G, 1);
    if(Vnum == G.vexnum && Enum == G.vexnum - 1)
        return true;

    return false;
}

void DFS(Graph &G, int v) {
    visited[v] = true;
    Vnum ++;
    int w = FirstNeighbor(G, v);
    while(w > 0) {
        Enum ++;
        if(!visited[w]) {
            DFS(G, w);
        }
        w = NextNeighbor(G, v, w);
    }
}