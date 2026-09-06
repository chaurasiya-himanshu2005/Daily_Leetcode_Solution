class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans(nums1.size());
        int i = 0, j = 0, k = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                ans[k] = nums1[i];
                i++;
                j++;
                k++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        ans.resize(k);
        return ans;
    }
};