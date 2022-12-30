/* Vasya plays the sleuth with his friends. The rules of the game are as follows: those who play for the first time, that is Vasya is the sleuth, he should investigate a "crime" and find out what is happening. He can ask any questions whatsoever that can be answered with "Yes" or "No". All the rest agree beforehand to answer the questions like that: if the question’s last letter is a vowel, they answer "Yes" and if the last letter is a consonant, they answer "No". Of course, the sleuth knows nothing about it and his task is to understand that.

Unfortunately, Vasya is not very smart. After 5 hours of endless stupid questions everybody except Vasya got bored. That’s why Vasya’s friends ask you to write a program that would give answers instead of them.

The English alphabet vowels are: A, E, I, O, U, Y

The English alphabet consonants are: B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, Z

Input
The single line contains a question represented by a non-empty line consisting of large and small Latin letters, spaces and a question mark. The line length does not exceed 100. It is guaranteed that the question mark occurs exactly once in the line — as the last symbol and that the line contains at least one letter.

Output
Print answer for the question in a single line: YES if the answer is "Yes", NO if the answer is "No".

Remember that in the reply to the question the last letter, not the last character counts. I. e. the spaces and the question mark do not count as letters.

Examples
inputCopy
Is it a melon?
outputCopy
NO
inputCopy
Is it an apple?
outputCopy
YES  */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sent;
    getline(cin, sent);
    int n = sent.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (sent[i] == '?' || sent[i] == ' ')
        {
            continue;
        }
        if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u' || sent[i] == 'y' || sent[i] == 'Y' || sent[i] == 'A' || sent[i] == 'E' || sent[i] == 'I' || sent[i] == 'O' || sent[i] == 'U')
        {
            cout << "YES" << endl;
            break;
        }
        else if (sent[i] == 'b' || sent[i] == 'c' || sent[i] == 'd' || sent[i] == 'f' || sent[i] == 'g' || sent[i] == 'h' || sent[i] == 'i' ||
                 sent[i] == 'j' || sent[i] == 'k' || sent[i] == 'l' || sent[i] == 'm' || sent[i] == 'n' || sent[i] == 'p' ||
                 sent[i] == 'q' || sent[i] == 'r' || sent[i] == 's' || sent[i] == 't' || sent[i] == 'v' ||
                 sent[i] == 'w' || sent[i] == 'x' || sent[i] == 'z' ||
                 sent[i] == 'B' || sent[i] == 'C' || sent[i] == 'D' || sent[i] == 'F' || sent[i] == 'G' || sent[i] == 'H' || sent[i] == 'I' ||
                 sent[i] == 'J' || sent[i] == 'K' || sent[i] == 'L' || sent[i] == 'M' || sent[i] == 'N' || sent[i] == 'P' ||
                 sent[i] == 'Q' || sent[i] == 'R' || sent[i] == 'S' || sent[i] == 'T' || sent[i] == 'V' ||
                 sent[i] == 'W' || sent[i] == 'X' || sent[i] == 'Z')
        {
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}
