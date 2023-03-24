class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        int fresh_oranges = 0;

        vector<vector<int>> vis(rows , vector<int>(cols , false));
        queue<pair<int , int>> q;
        
        for (int i = 0 ; i < grid.size() ; i++){
            for (int j = 0 ; j < grid[0].size() ; j++){
                if (grid[i][j] == 1) {
                    fresh_oranges += 1;
                }
                if (grid[i][j] == 2){
                    q.push({i , j});
                }
            }
        }

        if (fresh_oranges == 0) return 0; // agr koi fresh orange exist hi nahi kar raha toh

        int dx[] = {-1 , 1 , 0 , 0};
        int dy[] = {0  , 0 , -1 , 1};
        int level = 0;

        while (!q.empty()){
            int sz = q.size();
            while (sz--){
                auto ele = q.front();
                int i = ele.first;
                int j = ele.second;
                q.pop();

                for (int k = 0 ; k < 4 ; k++){

                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 and ni < rows and nj >= 0 and nj < cols){
                        if (grid[ni][nj] == 1 and vis[ni][nj] == false){
                            q.push({ni , nj});
                            vis[ni][nj] = true;
                            fresh_oranges -= 1;
                        }
                    }
                }
            }
            level += 1;
        }

        if (fresh_oranges > 0) return -1;
        return level-1;
    }
};