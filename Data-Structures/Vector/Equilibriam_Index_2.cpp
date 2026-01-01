#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int> arr(n);
    long long totalsum=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        totalsum+=arr[i];
    }
    long long leftsum=0;
    int eqindex=-1;
    for(int i=0;i<n;i++){
        long long rightsum=0;
        rightsum=totalsum-leftsum-arr[i];
        if(leftsum==rightsum){
            eqindex=i;
            break;
        }
        leftsum+=arr[i];
        
    }
    cout << eqindex;

    return 0;
}