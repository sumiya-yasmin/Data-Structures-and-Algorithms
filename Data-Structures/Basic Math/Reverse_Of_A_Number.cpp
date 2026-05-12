#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long newNum = 0;
    int x;
    while(n!=0){
    x= n%10;
    n=n/10;
    newNum=newNum*10+x;
    }
    cout << newNum;
    return 0;
}