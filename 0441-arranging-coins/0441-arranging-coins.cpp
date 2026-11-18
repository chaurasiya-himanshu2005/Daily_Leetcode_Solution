class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        for(long i=1; i*(i+1)/2 <= n; i++){
            ans = (int) i;
        }
        return ans;
    }
};