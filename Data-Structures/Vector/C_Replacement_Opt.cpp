// Given a number N and an array A of N numbers. 
// Print the array after doing the following operations:
// Replace every positive number by 1.
// Replace every negative number by 2.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            x=1;
        }else if(x<0){
            x=2;
        }
        cout<<x <<" ";
    }
    return 0;
}