#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    cin >> A >> B;

    queue<pair<long long, int>> q;
    q.push({ A,1 });

    unordered_map<long long, bool>visited;
    visited[A] = true;

    while (!q.empty()) 
    {
        long long cur = q.front().first;
        int count = q.front().second;
        q.pop();

        if (cur == B)
        {
            cout << count << endl;
            return 0;
        }

        long long val_1 = cur * 2;
        if (val_1 <= B && visited.find(val_1) == visited.end())
        {
            q.push({ val_1, count + 1 });
            visited[val_1] = true;
        }

        long long val_2 = cur * 10 + 1;
        if (val_2 <= B && visited.find(val_2) == visited.end())
        {
            q.push({ val_2, count + 1 });
            visited[val_2] = true;
        }
    }

    cout << -1 << endl;
    return 0;
}