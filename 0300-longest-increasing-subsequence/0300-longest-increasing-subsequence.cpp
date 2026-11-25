class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] > ans[ans.size()-1]){
                ans.push_back(arr[i]);
            }else{
                auto lb = lower_bound(ans.begin(), ans.end(), arr[i]);
                *lb = arr[i];
            }
        }
        return ans.size();
    }
};