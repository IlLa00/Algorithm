#include <iostream> 
#include <vector>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int count_5 = N / 5;
    int count_3 = 0;

    while (count_5 >= 0)
    {
        int remain = N - (count_5 * 5);

        if (remain % 3 == 0)
        {
            count_3 = remain / 3;
            cout << count_5 + count_3 << "\n";
            return 0;
        }

        count_5--;
    }

    cout << -1 << "\n";


    return 0;
}