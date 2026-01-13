#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool isSorted=true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if(arr[i]<arr[i-1]){
                isSorted=false;
                cout << "NO" << "\n";
                break;
            }
        }
        if(isSorted){
            cout << "YES" << "\n";
        }
    }
    return 0;
}
