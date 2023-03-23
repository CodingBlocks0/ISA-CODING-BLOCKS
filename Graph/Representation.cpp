#include<bits/stdc++.h>
using namespace std;

void unweighted(){
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
}

void weighted(){
    int nodes;
    int edges;
    cin >> nodes >> edges;

    vector<pair<int , int>> graph[nodes]; // simple

    for (int i = 1 ; i <= edges ; i++){
        int u , v , w;
        cin >> u >> v >> w;
        graph[u].push_back({v , w}); // unidirected
        graph[v].push_back({u , w}); // bidirectional                       // bidirected
    }
}



int main(){

}