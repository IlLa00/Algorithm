#include <iostream>
#include <vector>
#include <numeric> 
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> heights(9);
    int sum = 0;

    for (int i = 0; i < 9; ++i) 
    {
        cin >> heights[i];
        sum += heights[i];
    }

    int excess = sum - 100; 

    int dwarf1_idx = -1, dwarf2_idx = -1;
    for (int i = 0; i < 8; ++i) 
    {
        for (int j = i + 1; j < 9; ++j) 
        {
            if (heights[i] + heights[j] == excess) 
            {
                dwarf1_idx = i;
                dwarf2_idx = j;
                break; 
            }
        }
        if (dwarf1_idx != -1) break;
    }

    vector<int> result;
    for (int i = 0; i < 9; ++i) 
    {
        if (i != dwarf1_idx && i != dwarf2_idx) 
            result.push_back(heights[i]);
    }

    sort(result.begin(), result.end());

    for (int h : result) 
        cout << h << "\n";

    return 0;
}