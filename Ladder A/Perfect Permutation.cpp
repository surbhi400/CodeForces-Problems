/* A permutation is a sequence of integers p1, p2, ..., pn, consisting of n distinct positive integers, each of them doesn't exceed n. Let's denote the i-th element of permutation p as pi. We'll call number n the size of permutation p1, p2, ..., pn.

Nickolas adores permutations. He likes some permutations more than the others. He calls such permutations perfect. A perfect permutation is such permutation p that for any i (1 ≤ i ≤ n) (n is the permutation size) the following equations hold ppi = i and pi ≠ i. Nickolas asks you to print any perfect permutation of size n for the given n.

Input
A single line contains a single integer n (1 ≤ n ≤ 100) — the permutation size.

Output
If a perfect permutation of size n doesn't exist, print a single integer -1. Otherwise print n distinct integers from 1 to n, p1, p2, ..., pn — permutation p, that is perfect. Separate printed numbers by whitespaces.

Examples
input
1
output
-1
input
2
output
2 1 
input
4
output
2 1 4 3 
*/----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
    }

    else
    {
        int a[n + 1];//create an array to store all the elements of the permutation.
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            swap(a[i], a[i + 1]);
            ++i;// because we are using a pair.
        }
        for (int i = 1; i <= n; i++)// simply iterate and print the characters.
        {
            cout << a[i] << " ";
        }
        }
    return 0;
}
