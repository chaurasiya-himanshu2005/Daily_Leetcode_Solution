class Solution {
public:
    class Triplet{
    public:
        int row;
        int col;
        int time;
    };
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<Triplet> q;
        for(int i = 0; i< m; i++){
            for(int j =0; j<n; j++){
                if(grid[i][j] == 2) q.push({i,j,0});
            }
        }
        int maxTime = 0;
        while(q.size() > 0){
            Triplet front = q.front();
            q.pop();
            int row = front.row, col = front.col, time = front.time;
            if(time > maxTime) maxTime = time;
            // up
            if(row-1 >= 0 && grid[row-1][col] == 1){
                q.push({row-1,col,time+1});
                grid[row-1][col] = 2; // rot it
            }
            // down
            if(row+1 < m && grid[row+1][col] == 1){
                q.push({row+1,col,time+1});
                grid[row+1][col] = 2; // rot it
            }
            // left
            if(col-1 >= 0 && grid[row][col-1] == 1){
                q.push({row,col-1,time+1});
                grid[row][col-1] = 2; // rot it
            }
            // right
            if(col+1 < n && grid[row][col+1] == 1){
                q.push({row,col+1,time+1});
                grid[row][col+1] = 2; // rot it
            }
        }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return maxTime;
    }
};