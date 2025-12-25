// You are given an array a of n integers, count the number of element ai
//  in the array such that ai+1 is also exists in the array a.
// If there're duplicates in a, count them separately.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int> v(n);
    bool exists[10001]={false};

    for(int i=0;i<n;i++){
        cin>>v[i];
        exists[v[i]] = true;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(exists[v[i]+1]==true){
            count++;
        }
    }
    cout << count;
    return 0;
}