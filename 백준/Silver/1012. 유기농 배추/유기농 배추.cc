#include <iostream>
#include <vector>

using namespace std;

int M, N, K;
vector<vector<int>> adj;
vector<vector<bool>> visited;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y) 
{
    visited[x][y] = true;

    for (int i = 0; i < 4; ++i) 
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < M && ny >= 0 && ny < N) 
        {
            if (adj[nx][ny] == 1 && !visited[nx][ny]) 
                dfs(nx, ny);
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) 
    {
        cin >> M >> N >> K;

        adj.assign(M, vector<int>(N, 0));
        visited.assign(M, vector<bool>(N, false));

        for (int i = 0; i < K; ++i) 
        {
            int x, y;
            cin >> x >> y;
            adj[x][y] = 1;
        }

        int answer = 0;
        for (int i = 0; i < M; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                if (adj[i][j] == 1 && !visited[i][j]) 
                {
                    dfs(i, j);
                    answer++;
                }
            }
        }

        cout << answer << "\n";
    }

    return 0;
}