#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N;
    cin >> N;

    unordered_set<long long> s;

    for (int i = 0; i < N; i++)
    {
        long long num;
        cin >> num;

        s.insert(num);
    }

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        long long num;
        cin >> num;

        auto search = s.find(num);
        if (search != s.end())
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}