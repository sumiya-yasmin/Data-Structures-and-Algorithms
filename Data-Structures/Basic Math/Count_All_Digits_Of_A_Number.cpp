#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    if (n == 0)
    {
        cout << "1";
    }
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
        cout << count;
    }
    return 0;
}

int optimized(){
    long long n;
    cin >> n;
    int count = (int)(log10(n)+1);
    cout << count;
    return 0;
}