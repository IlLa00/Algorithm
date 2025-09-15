#include <iostream> 
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    bool has_zero = false;
    long long sum_of_digits = 0;

    for (char digit : str)
    {
        sum_of_digits += digit - '0';
        if (digit == '0') 
            has_zero = true;
    }

    if (sum_of_digits % 3 != 0 || !has_zero)
        cout << -1 << "\n";
    else 
    {
        sort(str.rbegin(), str.rend());
        cout << str << "\n";
    }

    return 0;
}