#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);    
}

void dfsUtil(vector<vector<int>> &adj, int u, int V, bool visited[]){    
    visited[u] = true;
    cout << u << " ";
    for(auto v: adj[u])
        if(!visited[v])
            dfsUtil(adj, v, V, visited);

}

void dfs(vector<vector<int>> &adj, int V){
    bool visited[V];
    memset(visited, false, sizeof(visited));

    for(int i=0; i<V; i++){
        if(!visited[i])
            dfsUtil(adj, i, V, visited);
    }
}

int main() {

    int V = 5;
    vector<vector<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 4, 3);    
    addEdge(adj, 3, 2);
    addEdge(adj, 1, 4);

    
    dfs(adj, V);
    
    return 0;
}
