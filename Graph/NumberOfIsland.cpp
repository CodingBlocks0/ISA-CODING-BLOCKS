class Solution {
public:
    int rows , cols;
    // char = '1' (island) , '0' (water)
    void dfs(vector<vector<char>>&grid , vector<vector<bool>>&vis  , int i , int j){

        // base case //
        if (i < 0 or j < 0 or i >= rows or j >= cols or  vis[i][j] == true or grid[i][j] == '0'){
            return;
        }

        // recursion calls //
        vis[i][j] = true;
        dfs(grid , vis , i-1 , j); // up
        dfs(grid , vis , i+1 , j); // down
        dfs(grid , vis , i , j-1); // left
        dfs(grid , vis , i , j+1);  // right
    }



    int numIslands(vector<vector<char>>& grid) {

        rows = grid.size();
        cols = grid[0].size();

        vector<vector<bool>> vis(rows , vector<bool>(cols , false));
        int islands = 0;

        for (int i = 0 ; i < rows ; i++){
            for (int j = 0 ; j < cols ; j++){
                if (grid[i][j] == '1' and vis[i][j] == false){
                    islands += 1;
                    dfs(grid , vis , i , j);
                }
            }
        }
        return islands;
    }
};