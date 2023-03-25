class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int nodes = graph.size();
        vector<bool> vis(nodes , false);
        vector<bool> color(nodes , -1);

        bool bipartite = true;
        // multicomponents graph hai  ... parent-> 0 child -> 1 , parent->1 , child->0 formula (1-color[parent])
        for (int i = 0 ; i < nodes ; i++){
            if (vis[i] == false){
                // BFS //
                queue<int> q;
                q.push(i);
                color[i] = 0;
                vis[i] = true;

                while (!q.empty()){

                    auto node = q.front();
                    q.pop();

                    for (auto child : graph[node]){
                        // child mila or vo kya tha vo non visited tah
                        if (vis[child] == false){
                            q.push(child);
                            vis[child] = true;
                            color[child] = 1-color[node];
                        }
                        // child jo ki already visited ho //
                        else if (vis[child] == true and color[child] == color[node]){
                            bipartite = false;
                        }
                    }

                }
            }
        }
        return bipartite;
    }
};