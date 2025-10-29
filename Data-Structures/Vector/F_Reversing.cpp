// Given a number N and an array A of N numbers. 
// Print the array in a reversed order.
// solve by reversing the vector
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
    reverse(a.begin(),a.end());
    for(int s: a){
        cout << s << " ";
    }
    cout << "Time Complexity of this problem is: O(nlogn)";
    return 0;
}


