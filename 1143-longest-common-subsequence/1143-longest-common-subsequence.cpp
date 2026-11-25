class Solution {
public:
    int lcs(int i, int j, string& a, string& b, vector<vector<int>>& dp){ // i-> m-1 to 0, j -> n-1 to 0
        if(i<0 or j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(a[i] == b[j]) return dp[i][j] = 1 + lcs(i-1, j-1, a, b, dp);
        return dp[i][j] = max(lcs(i, j-1, a, b, dp), lcs(i-1, j, a, b, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size(), n2 = text2.size();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        return lcs(n1-1, n2-1, text1, text2, dp);
    }
};