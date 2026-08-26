class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        for(int i=0; i<n; i++){
            int nextIndex = (i+1) % n;  // finding next element in array 
            if(nums[i] > nums[nextIndex]){   // compare with next element
                count++;
            }
        }
        if(count <= 1) return true;
        return false;
    }
};