#include<bits/stdc++.h>
using namespace std;

int main(){

    int nodes , edges;
    cin >> nodes >> edges;

    vector<int> graph[nodes];
    for (int i = 0 ; i < edges ; i++){
        int u , v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // BFS //
    vector<bool> vis(nodes , false);
    queue<int> q;
    q.push(0);
    vis[0] = true;

    while (!q.empty()){
        auto nodes = q.front();
        q.pop();
        cout << nodes << " ";
        for (auto child : graph[nodes]){
            if (vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }


    return 0;
}