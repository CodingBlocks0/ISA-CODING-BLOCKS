class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int n = fruits.size();
        int maximum_fruits = 0;
        int i = 0 , j = 0;
        unordered_map<int , int> notebook;

        while (j < n){
            notebook[fruits[j]] += 1; // acquire
            // release .. condition(wrong) //
            while (notebook.size() > 2){
                notebook[fruits[i]] -= 1;
                if (notebook[fruits[i]] == 0){
                    notebook.erase(fruits[i]);
                }
                i++;
            }
            maximum_fruits = max(maximum_fruits , j-i+1);
            j++;
        }

        return maximum_fruits;
    }
};