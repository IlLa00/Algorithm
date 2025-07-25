#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    vector<int> nums;
    long long sum = 0; // 평균
    map<int, int> m;

    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;

        nums.push_back(num);
        sum += num;
        m[num]++;
    }

    sort(nums.begin(), nums.end());
    
    double avg = (double)sum / size;
    cout << (int)(avg + (avg > 0 ? 0.5 : -0.5)) << '\n';

    cout << nums[size / 2] << '\n';

    int max = 0;
    for (const auto& pair : m)
    {
        if (pair.second > max)
            max = pair.second;
    }

    vector<int> check;
    for (const auto& pair : m) 
    {
        if (pair.second == max) 
            check.push_back(pair.first);
    }

    if (check.size() > 1)
        cout << check[1] << '\n'; 
    else 
        cout << check[0] << '\n'; 
    
    cout << nums.back() - nums.front();

    return 0;
}
