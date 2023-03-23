#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[] , int node , vector<bool>&vis){
    cout << node << " ";
    vis[node] = true;

    for (auto v : graph[node]){
        if (vis[v] == false){
            dfs(graph , v , vis);
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
    }

    vector<bool> vis(nodes , false);
    dfs(graph , 0 , vis);
    return 0;
}
//7 7
//0 1
//0 6
//1 2
//2 3
//3 1
//3 4
//4 5