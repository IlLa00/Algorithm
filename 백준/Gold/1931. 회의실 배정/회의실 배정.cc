#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int,int>> nums;

    for (int i = 0; i < N; i++)
    {
        int n, m;
        cin >> n >> m;

        nums.push_back({ n,m });
    }

    sort(nums.begin(), nums.end(), [](const pair<int, int>& A, const pair<int, int>& B)
        {
            if (A.second != B.second)
                return A.second < B.second;
            return A.first < B.first;
        });

    int answer = 0;
    int last = 0;
    for (const auto& n : nums)
    {
        if (last <= n.first)
        {
            last = n.second;
            answer++;
        }
    }

    cout << answer;

    return 0;
}