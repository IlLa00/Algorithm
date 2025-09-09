#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int> max_pq;
    priority_queue<int,vector<int>,greater<int>> min_pq;

    // B가 큰곳에 작은걸, 작은곳에 큰걸.

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        min_pq.push(n); // A
    }

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        max_pq.push(n);
    }

    int answer = 0;
    while (!min_pq.empty())
    {
        int min_num = min_pq.top();
        min_pq.pop();

        int max_num = max_pq.top();
        max_pq.pop();

        answer += min_num * max_num;
    }

    cout << answer;

    return 0;
}