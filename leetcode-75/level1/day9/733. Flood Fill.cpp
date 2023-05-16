class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int beforeColor = image[sr][sc];
        vector<vector<bool>> flag;
        int m = image.size();
        int n = image[0].size(); 
        flag.resize(m, std::vector<bool>(n, false));
        int dx[4] = { 1, 0, -1, 0 };
        int dy[4] = { 0, 1, 0, -1 };

        queue<pair<int, int>> q;
        q.push({ sr, sc });
        while (q.size() > 0) {
            pair<int, int> point = q.front();
            q.pop();
            flag[point.first][point.second] = true;

            if (image[point.first][point.second] == beforeColor) {
                image[point.first][point.second] = color;
                for (int i = 0 ; i < 4; i++) {
                    int nx = point.first + dx[i];
                    int ny = point.second + dy[i];

                    if (0 <= nx && nx < m && 0 <= ny && ny < n && !flag[nx][ny]) {
                        q.push({ nx, ny });
                    }
                }
            }
        }
        return image;
    }
};
