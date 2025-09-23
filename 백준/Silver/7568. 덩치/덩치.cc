#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>& A, pair<int, int>& B)
{
    if (A.first > B.first && A.second > B.second)
        return A > B;
    else
        return B < A;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> arr;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        arr.push_back({ x,y });
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                cnt++;
        }
        cout << cnt << " ";
    }


    return 0;
}