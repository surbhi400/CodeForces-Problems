/*  A. Reconnaissance 2
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference 
is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

Input
The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers
a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.

Output
Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, 
that the soldiers stand in a circle.

Examples
inputCopy
5
10 12 13 15 10
outputCopy
5 1  */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff, idx1, idx2, ansidx1, ansidx2;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            diff = abs(arr[i] - arr[0]);
            idx1 = i + 1;
            idx2 = 1;
        }
        else
        {
            diff = abs(arr[i] - arr[i + 1]);
            idx1 = i + 1;
            idx2 = i + 2;
        }

        if (diff <= minDiff)
        {
            minDiff = diff;
            ansidx1 = idx1;
            ansidx2 = idx2;
        }
    }
    cout << ansidx1 << " " << ansidx2 << endl;

    return 0;
}
