class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {

        int n = heights.size();
        priority_queue<int , vector<int> , greater<int>> pq; // min heap

        int index = 0;
        for ( ; index < n-1 ; index++)
        {
            if (heights[index+1] > heights[index]){

                if (pq.size() < ladders){
                    pq.push(heights[index+1] - heights[index]);
                }
                else {

                    int brickesneeded = heights[index+1] - heights[index];// itni bricks

                    if (!pq.empty() and pq.top() < brickesneeded and pq.top() <= bricks){
                        bricks -= pq.top();
                        pq.pop();
                        pq.push(brickesneeded);
                    }
                    else {
                        if (brickesneeded > bricks){break;}
                        else {
                            bricks -= brickesneeded;
                        }
                    }
                }
            }
        }

        return index;
    }
};

// https://leetcode.com/problems/furthest-building-you-can-reach/