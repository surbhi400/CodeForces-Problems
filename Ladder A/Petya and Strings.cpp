/* Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1 */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s, g;
    cin >> s;
    cin >> g;
    // convert both the strings in either lowercase or  uppercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(g.begin(), g.end(), g.begin(), ::tolower);

    if (s == g) // when both the strings are same
        cout << "0" << endl;
    else if (s < g)// if 1st string is legographically smaller than the 2nd string
        cout << "-1" << endl;
    else  // if 2nd string is legographically smaller than the 1st string
    {
        cout << "1" << endl;
    }
    return 0;
}
