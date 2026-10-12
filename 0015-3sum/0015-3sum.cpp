class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            set<int> s;

            for (int j = i + 1; j < n; j++) {
                int third_element = -(nums[i] + nums[j]);

                if (s.find(third_element) != s.end()) {
                    ans.push_back({nums[i], third_element, nums[j]});

                    while (j + 1 < n && nums[j] == nums[j + 1])
                        j++;
                }

                s.insert(nums[j]);
            }
        }

        return ans;
    }
};