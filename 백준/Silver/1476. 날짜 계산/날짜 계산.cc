#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E, S, M;
    cin >> E >> S >> M;

    int answer = 1;
    while (1)
    {
        if ((answer - 1) % 15 + 1 == E && (answer - 1) % 28 + 1 == S && (answer - 1) % 19 + 1 == M)
        {
            cout << answer;
            break;
        }
        
        answer++;
    }

    return 0;
}