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
    bool isExist[100001]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  //O(n)
        isExist[arr[i]]=true;
    }
    cin >> q;
    while (q--)  //O(q)
    {
        int num;
        cin >> num;
        if(isExist[num]==true){
            cout << "YES" << "\n";
        }else{

            cout << "NO" << "\n";
        }
        
    }
    return 0;
}