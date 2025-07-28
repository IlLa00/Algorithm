#include <iostream> 

using namespace std;

bool contains666(int n) 
{
    int count = 0; 

    while (n > 0) 
    {
        if (n % 10 == 6) 
        {
            count++;
            if (count == 3)
                return true;
        }
        else 
            count = 0;

        n /= 10; 
    }
    return false;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; 
    cin >> N;

    int count = 0;
    int current_number = 665;

    while (1) 
    {
        current_number++; 

        if (contains666(current_number)) 
            count++; 

        if (count == N) 
        {
            cout << current_number; 
            break; 
        }
    }

    return 0;
}