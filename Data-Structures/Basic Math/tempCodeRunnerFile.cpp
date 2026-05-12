#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int newNum = 0;
    while(n!=0){
    int x= n%10;
    n=n/10;
    newNum=newNum*10+x;
    }
    cout << newNum;
    return 0;
}