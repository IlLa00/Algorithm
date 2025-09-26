#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int answer = 0;

    int N, M;
    cin >> N >> M;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        int ind = i;
        while (ind < nums.size() && sum < M)
        {
            sum += nums[ind];
            ind++;

            if (sum == M)
            {
                answer++;
                break;
            }

            if (sum > M)
                break;
        }
    }

    cout << answer;


    return 0;
}