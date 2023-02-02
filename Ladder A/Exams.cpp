/* One day the Codeforces round author sat exams. He had n exams and he needed to get an integer from 2 to 5 for each exam. He will have to re-sit each failed exam,
i.e. the exam that gets mark 2.

The author would need to spend too much time and effort to make the sum of his marks strictly more than k. That could have spoilt the Codeforces round. On the other
hand, if the sum of his marks is strictly less than k, the author's mum won't be pleased at all.

The Codeforces authors are very smart and they always get the mark they choose themselves. Also, the Codeforces authors just hate re-sitting exams.

Help the author and find the minimum number of exams he will have to re-sit if he passes the exams in the way that makes the sum of marks for all n exams equal exactly k.

Input
The single input line contains space-separated integers n and k (1 ≤ n ≤ 50, 1 ≤ k ≤ 250) — the number of exams and the required sum of marks.

It is guaranteed that there exists a way to pass n exams in the way that makes the sum of marks equal exactly k.

Output
Print the single number — the minimum number of exams that the author will get a 2 for, considering that the sum of marks for all exams must equal k.

Examples
inputCopy
4 8
outputCopy
4
inputCopy
4 10
outputCopy
2
inputCopy
1 3
outputCopy
0 */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (k >= 3 * n)
    {
        cout << "0" << endl;
    }
    else
    {
        int ans = n - (k - 2 * n);
        cout << ans << endl;
    }
    return 0;
}
