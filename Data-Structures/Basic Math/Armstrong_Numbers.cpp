#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    long long n=num;
    int x;
    long long sum=0;
    while(n!=0){
        x=n%10;
        sum= sum + x*x*x;
        n=n/10;
    }
    if(sum==num){
        cout << "Armstrong";
    }else{
        cout << "Non Armstrong";
    }
    return 0;
}