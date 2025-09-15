#include <iostream> 
#include <string>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    cin >> N;

    int to1 = 0;
    int to0 = 0;

    char cur_c = N[0];
    if (cur_c == '0')
        to0++;
    else
        to1++;

    for (int i = 1; i < N.size(); i++)
    {
        if (cur_c != N[i])
        {
            if (N[i] == '0')
                to0++;
            else
                to1++;

            cur_c = N[i];
        }
    }

    cout << (to1 >= to0 ? to0 : to1) << "\n";

    return 0;
}