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

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        pq.push(n);
    }

    int answer = 0;
    int sum = 0;

    while (!pq.empty())
    {
        int num = pq.top();
        pq.pop();

        answer += num;
        sum += answer;
    }

    cout << sum << endl;

    return 0;
}