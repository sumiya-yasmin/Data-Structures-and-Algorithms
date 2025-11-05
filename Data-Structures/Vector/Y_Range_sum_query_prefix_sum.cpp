// Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. 
// For each query Q print a single line that contains the summation of all 
// numbers from index L to index R.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector<int> arr(n+1);
    for(int i=1; i<=n;i++){
        cin >> arr[i];
    }
    vector<long long int> pre(n+1);
    pre[1]=arr[1];
    for(int i=2;i<=n;i++){
        pre[i]= pre[i-1]+arr[i];
    }
    while(q--){
        int l,r;
        long long int sum;
        cin >> l >> r;
        if(l==1){
            sum = pre[r];
        }else{
            sum = pre[r] - pre[l-1];
        }
        cout << sum <<endl;
    }
    return 0;
}