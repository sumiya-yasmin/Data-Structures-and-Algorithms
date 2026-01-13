// you will be given an array A of size N.
//Print "YES" if there is any duplicate value in the array. "NO" otherwise.
// #include<stdio.h>
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     vector<bool> count(1000000007,false);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//         if(count[arr[i]]==true){
//             cout << "YES" << endl;
//             return 0;
//         }
//         count[arr[i]]=true;
//     }
//         cout << "NO" << endl;

//     return 0;
// }

#include<stdio.h>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    // bool isDuplicate=false;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            // isDuplicate=true;
            cout << "YES" << endl;
            return 0;
        }

    }
        cout << "NO" << endl;

    return 0;
}