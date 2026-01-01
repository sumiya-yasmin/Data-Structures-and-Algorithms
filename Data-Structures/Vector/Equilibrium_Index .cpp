// Problem 2: Equilibrium Index 
// Description: Given an array of integers, find the equilibrium index. 
//An equilibrium index is an index such that the sum of elements at lower 
//indexes is equal to the sum of elements at higher indexes.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<long long> presum(n);
    presum[0] = arr[0];
    long long sum=0;
    presum[0]=arr[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + arr[i];
    }
    int eqindex=-1;
    for(int i=0;i<n;i++){
    long long sumleft= (i==0) ? 0: presum[i-1];
    long long sumright=presum[n-1]-presum[i];

    if(sumleft==sumright){
       eqindex=i;
       break;
    }
    }
    cout << eqindex;
    return 0;
}