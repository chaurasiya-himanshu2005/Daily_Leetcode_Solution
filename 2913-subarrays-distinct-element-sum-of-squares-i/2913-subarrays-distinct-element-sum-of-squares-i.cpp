class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                set<int> s;
                for(int k = i; k<=j; k++){
                    s.insert(nums[k]);
                }
                int count = s.size();
                sum += count*count;
            }
        }
        return sum;
    }
};