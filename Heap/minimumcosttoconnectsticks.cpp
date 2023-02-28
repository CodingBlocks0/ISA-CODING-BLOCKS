int minimumCost(vector<int> &sticks) {
    priority_queue<int , vector<int> , greater<int>> pq;

    for (auto x : sticks){
        pq.push(x);
    }

    int cost = 0;

    while (pq.size() >= 2){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        cost += (x+y);
        pq.push(x+y);
    }

    return cost;
}