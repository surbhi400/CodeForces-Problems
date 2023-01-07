/* Roma (a popular Russian name that means 'Roman') loves the Little Lvov Elephant's lucky numbers.

Let us remind you that lucky numbers are positive integers whose decimal representation only contains lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky
and 5, 17, 467 are not.

Roma's got n positive integers. He wonders, how many of those integers have not more than k lucky digits? Help him, write the program that solves the problem.

Input
The first line contains two integers n, k (1 ≤ n, k ≤ 100). The second line contains n integers ai (1 ≤ ai ≤ 109) — the numbers that Roma has.

The numbers in the lines are separated by single spaces.

Output
In a single line print a single integer — the answer to the problem.

Examples
input
3 4
1 2 4
output
3
input
3 2
447 44 77
output
2 */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int n, k, num;
    int ans = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        string s = to_string(num);
        int count = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == '4' || s[i] == '7')
                count++;
        }
        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
