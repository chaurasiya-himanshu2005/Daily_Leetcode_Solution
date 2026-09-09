class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nge(m);
        nge[m-1] = -1;
        s.push(nums2[m-1]);
        for(int i = m-2; i>=0; i--){
            while(s.size() > 0 && s.top() < nums2[i]){
                s.pop();
            }
            if(s.size() == 0) nge[i] = -1;
            else nge[i] = s.top();
            s.push(nums2[i]);
        }
        vector<int> ans; 
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }
        return ans;
    }
};