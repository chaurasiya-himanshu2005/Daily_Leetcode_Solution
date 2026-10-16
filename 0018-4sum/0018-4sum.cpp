class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> s;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                set<long long> st;
                for(int k = j+1; k<n; k++){
                    long long sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    long long forth = (long long)target - sum;

                    if(st.find(forth) != st.end()){
                        vector<int> v = {nums[i], nums[j], nums[k],(int)forth};
                        sort(v.begin(),v.end());
                        s.insert(v);
                    }
                    st.insert(nums[k]);
                }    
            }
        }
        vector<vector<int>> ans(s.begin(), s.end());
        return ans;
    }
};