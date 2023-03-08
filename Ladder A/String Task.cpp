/* Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given
string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string
, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
inputCopy
tour
outputCopy
.t.r
inputCopy
Codeforces
outputCopy
.c.d.f.r.c.s
inputCopy
aBAcAba
outputCopy
.b.c.b
 */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    int x = s.length();
    for(int i = 0; i<x; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
    }
    cout<<s2<<endl;
    return 0;
}
