class Solution {
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int start = 0, end = n-1;
        int idx1 = -1, idx2 = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid]==target){
                idx1 = mid;
                end = mid - 1;
            }
            else if(nums[mid]>target) end = mid - 1;
            else start = mid + 1;
        }

        start = 0; end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                idx2 = mid;
                start = mid+1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }
        return new int[]{idx1, idx2};
    }
}