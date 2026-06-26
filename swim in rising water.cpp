
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        pq.push({grid[0][0], {0, 0}});
        visited[0][0] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int minTime = 0;

        while (!pq.empty()) {
            int t = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();

            minTime = max(minTime, t);

            if (r == n - 1 && c == n - 1) return minTime;

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({grid[nr][nc], {nr, nc}});
                }
            }
        }

        return -1;
    }
};
