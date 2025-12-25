// Given a number N and an array A of N numbers.
// Print the array in a reversed order.
// Note:
// *Don't use built-in-functions.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}