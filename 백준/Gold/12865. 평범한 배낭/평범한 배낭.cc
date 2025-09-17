#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> W(N + 1), V(N + 1);

    for (int i = 1; i <= N; i++) 
        cin >> W[i] >> V[i];

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) 
    { 
        for (int j = 1; j <= K; j++) 
        { 
            if (W[i] > j) 
                dp[i][j] = dp[i - 1][j]; 
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
        }
    }

    cout << dp[N][K] << endl;

    return 0;
}