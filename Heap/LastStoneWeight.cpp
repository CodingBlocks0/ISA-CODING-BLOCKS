class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;

        for (auto x : stones){
            pq.push(x);
        }


        while (pq.size() >= 2){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            if (first != second)
            {
                pq.push(first-second);
            }
        }

        return pq.size() > 0 ? pq.top() : 0;
    }
};