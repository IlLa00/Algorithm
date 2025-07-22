#include <iostream>
#include <queue>

using namespace std;

struct Compare
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    priority_queue<int, vector<int>, Compare> pq;

    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;

        if (num != 0)
            pq.push(num);
        else
        {
            if (!pq.empty())
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else
                cout << 0 << '\n';

        }
    }

    return 0;
}