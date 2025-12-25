//Given two arrays A and B of size N. Print a new array C that holds the 
//concatenation of array B followed by array A.
//Note: Solve this problem using function.
#include <bits/stdc++.h>
#include<iostream>

using namespace std;
void concateArray(vector<int> &v1, vector<int> &v2){
    for(int num:v2){
    cout<<num <<" ";
   }
   for(int num:v1){
    cout<<num <<" ";
   }

}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
     for(int i=0;i<n;i++){
        cin >> v2[i];
    }
   concateArray(v1,v2);
  
    return 0;
}