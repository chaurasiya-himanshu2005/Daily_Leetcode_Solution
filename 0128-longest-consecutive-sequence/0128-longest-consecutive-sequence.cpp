class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int longest = 0;
        for(auto it : st){
           if(st.find(it - 1) == st.end()){
                int count = 1;
                int ele = it;
                while(st.find(ele + 1) != st.end()){
                    count++;
                    ele = ele + 1;
                }
                longest = max(longest, count);
           }
        }

        return longest;
    }
};