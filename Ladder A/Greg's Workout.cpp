/* Greg is a beginner bodybuilder. Today the gym coach gave him the training plan. All it had was n integers a1, a2, ..., an. These numbers mean that Greg needs to do exactly n exercises today. Besides, Greg should repeat the i-th in order exercise ai times.

Greg now only does three types of exercises: "chest" exercises, "biceps" exercises and "back" exercises. Besides, his training is cyclic, that is, the first exercise he does is a "chest" one, the second one is "biceps", the third one is "back", the fourth one is "chest", the fifth one is "biceps", and so on to the n-th exercise.

Now Greg wonders, which muscle will get the most exercise during his training. We know that the exercise Greg repeats the maximum number of times, trains the corresponding muscle the most. Help Greg, determine which muscle will get the most training.

Input
The first line contains integer n (1 ≤ n ≤ 20). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 25) — the number of times Greg repeats the exercises.

Output
Print word "chest" (without the quotes), if the chest gets the most exercise, "biceps" (without the quotes), if the biceps gets the most exercise and print "back" (without the quotes) if the back gets the most exercise.

It is guaranteed that the input is such that the answer to the problem is unambiguous.

Examples
input
2
2 8
output
biceps
input
3
5 1 10
output
back
input
7
3 3 2 7 9 6 8
output
chest 
------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int chest = 0;
    int biceps = 0;
    int back = 0;
    int ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i % 3 == 1)
            chest += arr[i];
        else if (i % 3 == 2)
            biceps += arr[i];
        else
            back += arr[i];
    }
    if (chest > biceps && chest > back)
        cout << "chest" << endl;
    else if (biceps > chest && biceps > back)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}
