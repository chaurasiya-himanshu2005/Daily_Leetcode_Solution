class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> premax(n,0);
        vector<int> suffmax(n,0);
        int totalTrapWater = 0;
        premax[0] = 0;
        suffmax[n-1] = 0;
        for(int i=1; i<n; i++){
            premax[i] = max(premax[i-1], height[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            suffmax[i] = max(suffmax[i+1], height[i+1]);
        }
        for(int i=0; i<n; i++){
            int support = min(premax[i], suffmax[i]);
            if(support>height[i]){
                totalTrapWater += support - height[i];
            }
        }
        return totalTrapWater;
    }
};