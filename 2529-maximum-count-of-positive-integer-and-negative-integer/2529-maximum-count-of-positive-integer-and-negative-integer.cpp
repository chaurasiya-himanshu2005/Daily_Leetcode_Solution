class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negativeCount = 0, postiveCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0) negativeCount++;
            else if(nums[i]>0) postiveCount++;
        }
        return postiveCount>negativeCount?postiveCount:negativeCount;
    }
};