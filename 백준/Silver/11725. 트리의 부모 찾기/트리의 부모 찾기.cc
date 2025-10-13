#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> tree(N + 1);
    vector<int> parent(N + 1, 0);
    vector<bool> visited(N + 1, false);

    for (int i = 0; i < N - 1; i++) 
    {
        int a, b;
        cin >> a >> b;

        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) 
    {
        int current = q.front();
        q.pop();

        for (int next : tree[current]) 
        {
            if (!visited[next]) 
            {
                visited[next] = true;
                parent[next] = current;
                q.push(next);
            }
        }
    }

    for (int i = 2; i <= N; i++) 
        cout << parent[i] << '\n';

    return 0;
}