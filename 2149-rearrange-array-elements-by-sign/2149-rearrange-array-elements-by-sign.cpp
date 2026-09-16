class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, nev;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] < 0) nev.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        for(int i = 0; i<n/2; i++){
            nums[2*i] = pos[i];
            nums[2*i + 1] = nev[i];
        }
        return nums;
    }
};