// Given 2 numbers N and Q, array A of N numbers and 
// Q queries each one contains a number X.
// For each query print a single line that contains "found" 
// if the number X exists in array A otherwise, print "not found".
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n>> q;
    vector<int> a(n);
    for(int i=0;i<n;i++){   
        cin >> a[i];       //O(n)
    }
    sort(a.begin(),a.end()); //nlog(n)
    while(q--){          //O(n)     
        int x;
        bool flag=false;
        cin >> x;
        int l=0, r=n-1;
        while(l<=r){      //logn
            int mid=(l+r)/2;
            if(a[mid]==x){
                flag=true;
                break;
            }else if(a[mid]<x){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(flag){
            cout << "found" << endl;
        }else{
            cout << "not found" <<endl;
        }
    }
    return 0;
}