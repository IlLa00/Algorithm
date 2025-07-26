#include <iostream>
#include <vector>
#include <stack> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N); 
    for (int i = 0; i < N; ++i) 
        cin >> A[i];

    vector<int> NGE(N, -1); 
    stack<int> s;          

    for (int i = 0; i < N; i++) 
    {
        while (!s.empty() && A[s.top()] < A[i]) 
        {
            NGE[s.top()] = A[i]; 
            s.pop();             
        }
       
        s.push(i);
    }

    for (int i = 0; i < N; ++i) 
        cout << NGE[i] << ' ';

    return 0;
}