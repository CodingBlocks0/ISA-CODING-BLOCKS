#include<bits/stdc++.h>
using namespace std;

int main(){

    int nodes , edges;
    cin >> nodes >> edges;
    // src : 0 nodes  , 1 nodes+1
    vector<pair<int, int>> graph[nodes];

    for (int i = 0 ; i < edges ; i++){
        int u , v , w;
        cin >> u >> v >> w;
        graph[u].push_back({v , w});
        graph[v].push_back({u , w});
    }

    // {(distance , node)}  -> pair
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>pq;

    vector<int> distance(nodes , INT_MAX);
    // source = 0
    distance[0] = 0;
    pq.push({ 0 , 0 });

    //(distance , node)

    while (!pq.empty()){
        auto u = pq.top().second;
        auto dis = pq.top().first;
        pq.pop();
        if (dis > distance[u]){
            continue;
        }
        for (auto child : graph[u])
        {
            int v = child.first;
            int w = child.second;
            if (dis+w < distance[v])
            {
                distance[v] = dis + w;
                pq.push({distance[v] , v});
            }
        }
    }

    for (auto x : distance) {
        cout << x << " ";
    }
    return 0;
}