#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        int q = num >= 25 ? num / 25 : 0;
        cout << q << " "; 

        num = num % 25; 

        int d = num >= 10 ? num / 10 : 0;
        cout << d << " "; 

        num = num % 10; 

        int n = num >= 5 ? num / 5 : 0;
        cout << n << " ";

        num = num % 5;

        int p = num >= 1 ? num / 1 : 0;
        cout << p << endl;
    }

    return 0;
}