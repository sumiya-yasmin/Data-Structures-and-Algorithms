// Given a number N and an array A of N numbers.
// Print the array after doing the following operations:
// Replace every positive number by 1.
// Replace every negative number by 2.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int& s: a){
        if(s>0){
          s=1;
        }else if(s<0){
            s=2;
        }
    }

     for(int s: a){
       cout << s << " ";
    }
     cout << "Time Complexity of this problem is: O(n)";
    return 0;
}