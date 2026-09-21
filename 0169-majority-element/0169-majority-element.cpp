class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }

        for(auto key : map){
            if(key.second > n/2){
                return key.first;
            }
        }
        return -1;
    }
};