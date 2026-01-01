// WAP that takes an array of size n and q queries as input.
// For each query you will be given a number. For each query you have to print ‘YES’
// if the number is present in the array, otherwise print ‘No’.
// Solve this problem in an optimized way.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  //O(n)
    }
    cin >> q;
    while (q--)  //O(q)
    {
        int num;
        bool flag = false;
        cin >> num;
        for (int i = 0; i < n; i++)  //O(n)
        {
            if (arr[i] == num)
            {
                cout << "YES" << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}