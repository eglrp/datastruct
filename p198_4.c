bool visited[MAX_VEX_NUM];
void Path_BFS(ALGraph G, int i, int j) {
    if(i == j) {
        return true;
    }

    for(int n  = 0; n < G.vexnum; n++) {
        visited[n] = false;
    }

    InitQueue(Q);
    EnQueue(Q, i);

    while(!IsEmpty(Q)) {
        DeQueue(Q, p);
        visited[p] = true;
        while(int w = FirstNeighbor(G, p); w >= 0; w = NextNeighbor(G, p, w)) {
            if(w.adjvex == j) {
                return true;
            }

            if(!visited[w]) {
                EnQueue(Q, w);
            }
        }
    }

    return false;
}

/*************************************************************/

bool visited[MAX_VEX_NUM];
void Path_DEF(ALGraph &G, int i, int j) {
    if(i == j) {
        return true;
    }

    for(int n = 0; n < G.vexnum; n++) {
        visited[n] = false;
    }

    visited[i] = true;
    for(w = FirstNeighbor(G, i); w >= 0; w = NextNeighbor(G, i, w)) {
        if(!visited[i] && Path_DEF(G, w, j)) {
            return true;
        }
    }

    return false;
}