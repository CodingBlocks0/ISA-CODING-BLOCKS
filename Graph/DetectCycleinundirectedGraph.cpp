#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[] , int node , vector<bool>&path , vector<bool>&vis , bool&cycle){
    vis[node] = true;
    path[node] = true;

    for (auto child : graph[node]){
        if (path[child] == true){cycle = true; return;}
        if (vis[child] == false) {
            dfs(graph , child , path , vis , cycle);
        }
    }
    path[node] = false;
    return;
}


int main(){

    int nodes;
    int edges;
    cin >> nodes >> edges;

    vector<int> graph[nodes];

    for (int i = 1 ; i <= edges ; i++){
        int u , v;
        cin >> u >> v;
        graph[u].push_back(v); // unidirected
    }
    vector<bool> path(nodes , false);
    vector<bool> vis(nodes , false);
    bool cycle = false;
    dfs(graph , 0 , path , vis , cycle);
    return 0;
}