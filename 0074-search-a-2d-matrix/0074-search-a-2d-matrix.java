class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int cols = matrix[0].length;
        int start=0, end = row*cols - 1;
        while(start<=end){
            int mid = start + (end - start)/2;
            int midRow = mid/cols, midCols = mid%cols;
            if(matrix[midRow][midCols] == target) return true;
            else if(matrix[midRow][midCols] > target) end = mid - 1;
            else start = mid + 1;
        }
        return false;
    }
}