class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n > m) swap(m, n);
        vector<vector<int>> dp(2, vector<int>(n, 1));
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                dp[1][j] = dp[0][j] + dp[1][j-1];
            }
            dp[0] = dp[1]; // oth row me 1st row copy krdo
        }
        return dp[1][n-1];
    }
};