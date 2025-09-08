#include <iostream> 
#include <unordered_map>
#include <vector>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    unordered_map<int, vector<int>> map;

    for (int i = -999; i <= 999; i++)
    {
        for (int j = -999; j <= 999; j++)
        {
            if (a * i + b * j == c)
                map[i].push_back(j);
        }
    }

    for (int i = -999; i <= 999; i++)
    {
        for (int j = -999; j <= 999; j++)
        {
            if (d * i + e * j == f)
            {
                auto it = map.find(i);
                if (it != map.end())
                {
                    for (auto ele : it->second)
                    {
                        if (ele == j)
                        {
                            cout << i << " " << j << "\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }


    return 0;
}