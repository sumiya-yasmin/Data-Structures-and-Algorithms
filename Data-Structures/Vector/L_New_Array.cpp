//Given two arrays A and B of size N. Print a new array C that holds the 
//concatenation of array B followed by array A.
//Note: Solve this problem using function.
#include <bits/stdc++.h>
using namespace std;
vector<int> concateArray(vector<int> *a, vector<int> *b ){
vector<int> c;
    
     for(int s:*b){
        c.push_back(s);
     }
     for(int s:*a){
        c.push_back(s);
     }
     return c;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> b(n);
 
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<int> c = concateArray(&a,&b);
     for(int s:c){
        cout << s << " ";
     }
       cout << "Time Complexity of this problem is: O(n)";
    return 0;
}