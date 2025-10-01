#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> result;
vector<bool> visited;

void factorial(int count)
{
    if (count == N)
    {
        for (int i = 0; i < N; i++)
            cout << result[i] << ((i == N - 1) ? "" : " ");
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            result[count] = i;
            visited[i] = true;

            factorial(count + 1); 
            visited[i] = false;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    result.resize(N);
    visited.resize(N + 1, false);

    factorial(0);

    return 0;
}