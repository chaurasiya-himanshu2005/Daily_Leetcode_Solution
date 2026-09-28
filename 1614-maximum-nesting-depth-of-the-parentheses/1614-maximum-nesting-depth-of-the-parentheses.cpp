class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans = 0, count = 0;
        for(int i = 0; i<n; i++){
            char ch = s[i];
            if(ch == '('){
                count++;
            }
            if(ch == ')'){
                ans = max(ans, count);
                count--;
            }
        }
        return ans;
    }
};