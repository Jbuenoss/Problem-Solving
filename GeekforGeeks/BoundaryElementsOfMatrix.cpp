/*
class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        vector<int> sol;
        int n = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0 || j == n-1 || i == 0 || i == n-1)
                    sol.push_back(matrix[i][j]);
            }
        }
        return sol;
    }
};
*/