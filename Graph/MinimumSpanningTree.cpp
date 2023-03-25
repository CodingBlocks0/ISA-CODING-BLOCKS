#include <bits/stdc++.h>
using namespace std;

int main(){
    int nodes , edges;
    cin >> nodes >> edges;

    vector<pair<int , int>> graph[nodes+1];

    for (int i = 0 ; i < edges ; i++){
        int u , v , w;
        cin >> u >> v >> w;
        graph[u].push_back({v , w});
        graph[v].push_back({u , w});
    }

    vector<bool> MST(nodes+1 , false);
    // Prim's Algorithm
    // {(weight , node)}
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>pq;
    pq.push({0 , 1});


    int TOTALCOST = 0;
    while (!pq.empty()){

        auto weight = pq.top().first;
        auto U   = pq.top().second;
        pq.pop();

        if (MST[U] == true){
            continue;
        }
        MST[U] = true;
        TOTALCOST += weight;
        for (auto ele : graph[U]){
            auto V = ele.first; // child connected
            auto W = ele.second; // weight kitna hai
            if (MST[V] == false){
                pq.push({W , V});
            }
        }
    }
    cout << "Total Cost : "  << TOTALCOST  << endl;
    return 0;
}
//4 5
//1 2 10
//2 3 20
//1 3 15
//3 4 1
//1 4 5