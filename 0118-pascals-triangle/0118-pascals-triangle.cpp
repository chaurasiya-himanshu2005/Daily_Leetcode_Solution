class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> list(i + 1, 1);
            ans.push_back(list);
        }

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    ans[i][j] = 1;
                } else {
                    int val = ans[i - 1][j] + ans[i - 1][j - 1];
                    ans[i][j] = val;
                }
            }
        }

        return ans;
    }
};