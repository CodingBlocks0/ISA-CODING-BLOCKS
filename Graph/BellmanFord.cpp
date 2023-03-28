int isNegativeWeightCycle(int n, vector<vector<int>>edges){


    vector<int> dis(n , 1e8);
    dis[0] = 0;

    for (int times = 1 ; times <= n-1 ; times++){
        for (auto x : edges){
            int u = x[0];
            int v = x[1];
            int w = x[2];
            if (dis[u] + w < dis[v]){
                dis[v] = dis[u] + w;
            }
        }
    }

    // ek or bar relax kar ke check karenge kya negative cycle exist kar rahi hai ya nahi
    for (auto x : edges){
        int u = x[0];
        int v = x[1];
        int w = x[2];
        if (dis[u] + w < dis[v]){
            return 1;
        }
    }
    return 0;

}

// directed graph , negative weights ko detect karne ke liye