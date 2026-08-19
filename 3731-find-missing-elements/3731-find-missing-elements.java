class Solution {
    public List<Integer> findMissingElements(int[] nums) {

        List<Integer> list = new ArrayList<>();
        int min = nums[0], max = nums[0];
        for(int i = 0; i<nums.length; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }

        for(int i = min; i <= max; i++){
            boolean find = false;

            for(int j = 0; j< nums.length; j++){
                if(nums[j] == i){
                    find = true;
                    break;
                }
            }
            if(!find){
                list.add(i);
            }
        }

        Collections.sort(list);
        return list;
    }
}