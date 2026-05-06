#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout<<endl;
    }
    int space=2;
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout << "*";
        }
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for(int j=0;j<n-i-1;j++){
            cout << "*";
        }
        space=space+2;
        cout<<endl;
    }

    

    return 0;
}