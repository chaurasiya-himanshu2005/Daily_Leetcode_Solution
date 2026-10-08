class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // Transpose of matrix
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix[0].size(); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // swapping left column to right column
        int left = 0;
        int right = matrix.size()-1;

        while(left<right){
            for(int j=0; j<matrix.size(); j++){
                int temp = matrix[j][left];
                matrix[j][left] = matrix[j][right];
                matrix[j][right] = temp;
            }
            left++;
            right--;
        }
    }
};