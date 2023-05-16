class Solution {
public:
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    void dfs(vector<vector<char>>& grid, int m, int n, int x, int y) {
        if (grid[x][y] == '0') {
            return;
        }

        grid[x][y] = '0';
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < m && 0 <= ny && ny < n) {
                dfs(grid, m, n, nx, ny);
            }
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int answer = 0;
        int m = grid.size();
        int n = grid[0].size(); 
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    answer++;
                    dfs(grid, m, n, i, j);
                }
            }
        }
        return answer;
    }
};
