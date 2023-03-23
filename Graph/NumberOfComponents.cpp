#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[], int node , vector<bool>&vis){
    vis[node] = true;
    for (auto child : graph[node]){
        if (vis[child] == false){
            dfs(graph , child , vis);
        }
    }
    return;
}

int main(){

    int nodes; // 7 -> (0-6)
    int edges;
    cin >> nodes >> edges;

    vector<int> graph[nodes];

    for (int i = 1 ; i <= edges ; i++){
        int u , v;
        cin >> u >> v;
        graph[u].push_back(v); // unidirected
        graph[v].push_back(u); // bidirectional                       // bidirected
    }

    int components = 0;
    vector<bool> vis(nodes , false);
    for (int node = 0 ; node < nodes ; node++){
        if (vis[node] == false){
            components += 1;
            dfs(graph , node , vis);
        }
    }
    return 0;
}