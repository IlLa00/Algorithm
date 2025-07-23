#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        priority_queue<int> max_pq; // 최대 힙
        priority_queue<int, vector<int>, greater<int>> min_pq; // 최소 힙

        int arr_size;
        cin >> arr_size;

        cout << (arr_size / 2) + 1 << '\n';

        for (int j = 0; j < arr_size; j++)
        {
            int num;
            cin >> num;

            if (max_pq.empty() || num <= max_pq.top())
                max_pq.push(num);
            else
                min_pq.push(num);

            if (max_pq.size() > min_pq.size() + 1)
            {
                int swap = max_pq.top();
                max_pq.pop();
                min_pq.push(swap);
            }
            else if (min_pq.size() > max_pq.size())
            {
                int swap = min_pq.top();
                min_pq.pop();
                max_pq.push(swap);
            }

            if (j % 2 == 0) // 홀수면
                cout << max_pq.top() << " ";
        }
    }

    return 0;
}