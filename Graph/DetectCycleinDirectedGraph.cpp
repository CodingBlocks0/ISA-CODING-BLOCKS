#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> graph[] , int node , int parent,vector<bool>&vis , bool&cycle){
    vis[node] = true;
    for (auto child : graph[node]){
        if (child != parent){
            if (vis[child] == true) {cycle = true; return;}
            DFS(graph , child , node , vis , cycle);
        }
    }
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
        graph[v].push_back(u); // bidirectional                       // bidirected
    }

    vector<bool> vis(nodes , false);

    bool cycle = false;
    DFS(graph , 0 , -1 , vis , cycle);
    if (cycle == false){
        cout << "No cycle exist in graph";
    }
    else {
        cout << "Cycle exist in graph";
    }
    return 0;
}