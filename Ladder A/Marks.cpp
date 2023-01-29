/* Vasya, or Mr. Vasily Petrov is a dean of a department in a local university. After the winter exams he got his hands on a group's gradebook.

Overall the group has n students. They received marks for m subjects. Each student got a mark from 1 to 9 (inclusive) for each subject.

Let's consider a student the best at some subject, if there is no student who got a higher mark for this subject. Let's consider a student successful, if there exists 
a subject he is the best at.

Your task is to find the number of successful students in the group.

Input
The first input line contains two integers n and m (1 ≤ n, m ≤ 100) — the number of students and the number of subjects, correspondingly. Next n lines each containing 
m characters describe the gradebook. Each character in the gradebook is a number from 1 to 9. Note that the marks in a rows are not sepatated by spaces.

Output
Print the single number — the number of successful students in the given group.

Examples
inputCopy
3 3
223
232
112
outputCopy
2
inputCopy
3 5
91728
11828
11111
outputCopy
3 */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<string> marks(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> marks[i];
    }
    vector<bool> successful(n, false);
    for (int subject = 0; subject < m; ++subject)
    {
        char best = '0';
        for (int i = 0; i < n; ++i)
        {
            if (marks[i][subject] > best)
            {
                best = marks[i][subject];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (marks[i][subject] == best)
            {
                successful[i] = true;
            }
        }
    }
    cout << count(successful.begin(), successful.end(), true);
    return 0;
}
