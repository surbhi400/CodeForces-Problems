#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];

    for (int i = 1; i < N; i++)
    {
        cin >> arr[i];
    }
    int diff, id1, id2, ansid1, ansid2;
    int mindiff = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            diff = abs(arr[i] - arr[0]);
            id1 = i + 1;
            id2 = i;
        }
        else
        {
            diff = abs(arr[i] - arr[i + 1]);
            id1 = i + 1;
            id2 = i + 2;
        }
        if (diff <= mindiff)
        {
            mindiff = diff;
            ansid1 = id1;
            ansid2 = id2;
        }
    }
    cout << ansid1 << " " << ansid2;
    return 0;
}
