class Solution {

    bool isValid(vector<int> nums, int n, int k, int minAllowedSum){
        int subarray = 1, time = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] + time <= minAllowedSum){
                time += nums[i];
            }
            else {
                subarray++;
                time = nums[i];
            }
        }
        return subarray<=k;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int max = nums[0], sum = 0;
        for(int i =0; i<n; i++){
            if(nums[i]>max) max = nums[i];
            sum += nums[i];
        }
        int start = max, end = sum, ans = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(isValid(nums, n, k, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }
};