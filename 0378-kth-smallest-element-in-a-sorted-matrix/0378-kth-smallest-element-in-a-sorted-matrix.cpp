class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();

        vector<int> answer(n*n);
        int indx= 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                answer[indx] = matrix[i][j];
                indx++;
            }
        }
        sort(answer.begin(), answer.end());
        return answer[k-1];
    }
};