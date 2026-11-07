class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;
        int left = 0, right = 1;
        while(right < n){
            if(left == right){
                right++;
            }
            else{
                int diff = nums[right] - nums[left];
                if(diff<k){
                    right++;
                }else if(diff > k){
                    left++;
                }else{
                    count++;
                    left++;
                    right++;

                    while(right < n && nums[right] == nums[right-1]){
                        right++;
                    }
                }
            }
        }
        return count;
    }
};