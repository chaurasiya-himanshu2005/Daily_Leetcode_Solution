class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;
        int index;
        List<Integer> list = new ArrayList<>();
        
        for(int i=0; i<n; i++){
            index = Math.abs(nums[i]) - 1;
            if(nums[index] < 0) continue;
            nums[index] = -(nums[index]);
            
        }
        for(int i=0; i<n; i++){
            if(nums[i]>0) list.add(i+1);
        }
        return list;
    }
}