class Solution {
    int reverseDigit(int n){
        int rev = 0;
        while(n != 0){
            int ld = n % 10;
            rev = rev * 10 + ld;
            n /= 10;
        }
        return rev;
    }
    public int countDistinctIntegers(int[] nums) {
        int n = nums.length;
        HashSet<Integer> ans = new HashSet<>();
        for(int i = 0; i<n; i++){
            ans.add(nums[i]);
            int rev = reverseDigit(nums[i]);
            ans.add(rev);
        }
        return ans.size();
    }
}