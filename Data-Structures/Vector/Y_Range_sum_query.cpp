// Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. 
// For each query Q print a single line that contains the summation of all 
// numbers from index L to index R.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
   cin >> n;
   cin >> q;
   vector<int> a(n);
   for(int i=0;i<n;i++){
    cin >> a[i];      //O(n)
   }
   int l,r;
   while(q--){
       cin >> l ;
       cin >> r;
       long long sum=0;    //O(q*n)
    for(int i=l-1;i<r;i++){
        sum+=a[i];
    }
    cout << sum <<endl;
   }
    return 0;
}