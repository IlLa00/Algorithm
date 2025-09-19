#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> visit_order;
int count_order = 1;

void dfs(int current_node) 
{
    visited[current_node] = true;
    visit_order[current_node] = count_order++;

    for (int next_node : graph[current_node]) 
    {
        if (!visited[next_node]) 
            dfs(next_node);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, R;
    cin >> N >> M >> R;

    graph.resize(N + 1);
    visited.resize(N + 1, false);
    visit_order.resize(N + 1, 0);

    for (int i = 0; i < M; ++i) 
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; ++i) 
        sort(graph[i].begin(), graph[i].end());

    dfs(R);

    for (int i = 1; i <= N; ++i) 
        cout << visit_order[i] << "\n";

    return 0;
}