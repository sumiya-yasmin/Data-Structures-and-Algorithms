#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arrA(n);
    for(int i=0;i<n;i++){
        cin >> arrA[i];
    }
    int m;
    cin >> m;
    vector<int> arrB(m);
    for(int i=0;i<m;i++){
        cin >> arrB[i];
    }
    int x;
    cin >> x;
    arrA.insert(arrA.begin()+x,arrB.begin(),arrB.end());
     for(int i=0;i<n+m;i++){
        cout << arrA[i] << " ";
    }
    return 0;
}