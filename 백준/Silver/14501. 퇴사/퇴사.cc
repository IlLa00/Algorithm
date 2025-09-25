#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> schedule;
int max_num = 0;

void dfs(int day, int current) 
{
    if (day >= N) 
    {
        max_num = max(max_num, current);
        return;
    }

    int T = schedule[day].first; 
    int P = schedule[day].second; 

    if (day + T <= N) 
        dfs(day + T, current + P);

    dfs(day + 1, current);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    schedule.resize(N);

    for (int i = 0; i < N; i++) 
        cin >> schedule[i].first >> schedule[i].second;

    dfs(0, 0);

    cout << max_num << "\n";

    return 0;
}