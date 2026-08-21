class Solution {
    public int[] canSeePersonsCount(int[] heights) {
        int n = heights.length;
        Stack<Integer> s = new Stack<>();
        int[] ans = new int[n];

        for(int i = n - 1; i>= 0; i--){
            while(!s.isEmpty() && s.peek() < heights[i]){
                s.pop();
                ans[i]++;
            }
            if(!s.isEmpty()) ans[i]++; // imp
            s.push(heights[i]);
        }
        return ans;
    }
}