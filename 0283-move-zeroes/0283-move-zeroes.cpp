class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while(i<n && nums[i] != 0) i++;
        j = i;
        while(j<n){
            if(nums[j] == 0) j++;
            else{
                swap(nums[i], nums[j]);
                while(i<n && nums[i] != 0) i++;
            }
        }
    }
};