class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int n = arr.length;
        HashMap<Integer,Integer> map = new HashMap<>();

        for(int i = 0; i<n; i++){
            map.put(arr[i], map.getOrDefault(arr[i],0)+1);
        }
        
        HashSet<Integer> set = new HashSet<>();

        for(int freq: map.values()){
            if(set.contains(freq)){
                return false;
            }
            set.add(freq);
        }
        return true;
    }
}