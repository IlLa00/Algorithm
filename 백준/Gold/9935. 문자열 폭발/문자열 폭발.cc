#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    string bombstr;
    cin >> bombstr;

    string result;

    int bomb_len = bombstr.length();

    for (char ch : str)
    {
        result.push_back(ch);

        if (result.length() >= bomb_len && result.back() == bombstr.back())
        {
            bool is_bomb = true;

            for (int i = 0; i < bomb_len; ++i)
            {
                if (result[result.length() - bomb_len + i] != bombstr[i])
                {
                    is_bomb = false;
                    break;
                }
            }

            if (is_bomb)
            {
                for (int i = 0; i < bomb_len; ++i)
                    result.pop_back();
            }
        }
    }

    if (result.empty())
        cout << "FRULA";
    else
        cout << result;


    return 0;
}