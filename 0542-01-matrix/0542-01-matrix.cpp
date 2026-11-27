
class Solution {
public:
    class Pair{
    public:
        int row;
        int col;

        Pair(int r, int c) {
            row = r;
            col = c;
        }
    };

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();

        queue<Pair> q;

        vector<vector<int>> ans(m, vector<int>(n, -1));

        // Step 1: Push all 0 cells into queue
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    q.push(Pair(i, j));
                    ans[i][j] = 0;
                }
            }
        }

        // Directions: Up, Down, Left, Right
        int delRow[] = {-1, 1, 0, 0};
        int delCol[] = {0, 0, -1, 1};

        // Step 2: BFS
        while(!q.empty()) {
            Pair curr = q.front();
            q.pop();

            int row = curr.row;
            int col = curr.col;

            for(int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow >= 0 && nrow < m &&
                   ncol >= 0 && ncol < n &&
                   ans[nrow][ncol] == -1) {

                    ans[nrow][ncol] = ans[row][col] + 1;

                    q.push(Pair(nrow, ncol));
                }
            }
        }

        return ans;
    }
};
