#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2*n-1; i++)
    {
        if(i<n){
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        
        
            cout << endl;
        
    }else{

     for (int j = 0; j < 2*n-i-1; j++)
     {
            cout << "*";
        // if (i < n-1)
        // {
        //     cout << endl;
        // }
     }
        cout <<endl;
}
    
}
return 0;
}