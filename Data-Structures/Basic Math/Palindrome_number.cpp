#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long newNum = 0;
    int x;
    long long ori=n;
    while(ori!=0){
    x= ori%10;
    ori=ori/10;
    newNum=newNum*10+x;
    }
    if(n==newNum){
        cout << "YES";
    }else{
        cout << "No";
    }
    return 0;
}