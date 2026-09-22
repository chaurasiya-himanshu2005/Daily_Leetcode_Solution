class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), tolnum = n*n;
        int repeat = 0;
        int sum = 0;
        int totalSum = tolnum * (tolnum + 1) / 2;
        set<int> st;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                sum += grid[i][j];

                if(st.find(grid[i][j]) != st.end()){
                    repeat = grid[i][j];
                }
                st.insert(grid[i][j]);
            }
        }
        sum = sum - repeat;
        long long missing = totalSum - sum;

        return {repeat, (int)missing};
    }
};