class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pIndx = 0;
        int nIndx = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                ans[pIndx] = nums[i];
                pIndx += 2;
            }else{
                ans[nIndx] = nums[i];
                nIndx += 2;
            }
        }
        return ans;
    }
};