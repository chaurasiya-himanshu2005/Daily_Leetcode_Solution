class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maximum = nums[0];
        int sum = 0;
        for(int i=1;i<n;i++){
            if(nums[i]>maximum){
                maximum = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            sum+=(maximum-nums[i]);
        }
        return sum;
    }
};