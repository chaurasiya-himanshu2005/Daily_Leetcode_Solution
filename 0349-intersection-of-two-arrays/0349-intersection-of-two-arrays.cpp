class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
sort(nums2.begin(), nums2.end());

int maxLen = min(nums1.size(), nums2.size());
vector<int> ans(maxLen);

int i = 0, j = 0, k = 0;

while (i < nums1.size() && j < nums2.size()) {
    if (nums1[i] == nums2[j]) {
        if (k == 0 || ans[k - 1] != nums1[i]) {
            ans[k] = nums1[i];
            k++;
        }
        i++;
        j++;
    }
    else if (nums1[i] < nums2[j]) {
        i++;
    }
    else {
        j++;
    }
}

ans.resize(k);
return ans;
    }
};