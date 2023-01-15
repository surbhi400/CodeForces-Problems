/* Levko loves tables that consist of n rows and n columns very much. He especially loves beautiful tables. A table is beautiful to Levko if the sum of elements in each row and column of the table equals k.

Unfortunately, he doesn't know any such table. Your task is to help him to find at least one of them.

Input
The single line contains two integers, n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 1000).

Output
Print any beautiful table. Levko doesn't like too big numbers, so all elements of the table mustn't exceed 1000 in their absolute value.

If there are multiple suitable tables, you are allowed to print any of them.


Examples:
inputCopy
2 4
outputCopy
1 3
3 1
inputCopy
4 7
outputCopy
2 1 0 4
4 0 2 1
1 3 3 0
0 3 2 2
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int i, j;

    cin >> n >> k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
                cout << k << " ";
            else
                cout << "0 ";
        }

        cout << endl;
    }
}
