#include <iostream>
#include <vector>

using namespace std;

int K; 
int merget_count = 0; 
int result = -1;

void merge(vector<int>& arr, int p, int q, int r) 
{
    int i = p;
    int j = q + 1;
    vector<int> temp;

    while (i <= q && j <= r) 
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else 
            temp.push_back(arr[j++]);
    }

    while (i <= q) 
        temp.push_back(arr[i++]);

    while (j <= r) 
        temp.push_back(arr[j++]);

    i = p;

    for (int t = 0; t < temp.size(); t++) 
    {
        arr[i++] = temp[t];
        merget_count++;
        if (merget_count == K)
        {
            result = temp[t];
            return; // K번째 값을 찾으면 바로 함수 종료
        }
    }
}

void merge_sort(vector<int>& arr, int p, int r)
{
    if (result != -1) return; // 재귀 호출X
    if (p < r) 
    {
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    merge_sort(arr, 0, N - 1);

    cout << result << "\n";

    return 0;
}