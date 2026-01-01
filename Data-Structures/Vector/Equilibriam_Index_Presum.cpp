// Given an array of integers, find the equilibrium index. 
// An equilibrium index is an index such that the sum of elements at lower indexes 
// is equal to the sum of elements at higher indexes.
#include <bits/stdc++.h>
using namespace std;
vector<long long> calculatePresum(vector<int> arr,int n){
 vector<long long> presum(n);
    for(int i=0;i<n;i++){
        if(i==0){
            presum[i]=arr[i];
        }else{
            presum[i]=presum[i-1]+arr[i];
        }
    }
    return presum;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
   vector<long long> presum=calculatePresum(arr,n);
   int eqindex=-1;
    for(int i=0;i<n;i++){
         long long sumleft=0;
         long long sumright=0;
        if(i==0){
            sumleft=0;
        }else{
            sumleft=presum[i-1];
        }
        sumright= presum[n-1]-presum[i];
       if(sumleft==sumright){
        eqindex=i;
        break;
       }
    }
    cout << eqindex;

    return 0;
}