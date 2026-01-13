#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int spaces = n - 2;
    // int space_start = 1;
    // for (int i = 0; i < (n - 1) / 2; i++)
    // {

    //     cout << "\\";

    //     for (int j = 0; j < spaces; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "/";
    //     spaces -= 2;
    //     cout << endl;
    //     for (int i = 0; i < space_start; i++)
    //     {
    //         cout << " ";
    //     }
    //     space_start++;
    // }

    // cout << "X\n";
    // int spaces_down=1;
    // int starting_space_down=(n-1)/2-1;
    // for (int i = 0; i < (n - 1) / 2; i++)
    // {

    //     for (int i = 0; i < starting_space_down; i++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "/";
    //     starting_space_down--;
    //     for (int j = 0; j < spaces_down; j++)
    //     {
    //         cout << " ";
    //     }
    //     spaces_down+=2;
    //     cout << "\\";
    //     cout << endl;

        
    // }
    int n;
    cin >> n;
    int outer=0;
    int inner= n-2;
    for(int i=0;i<n/2;i++){
       for(int j=0;j<outer;j++){
        cout << " ";
       }
       cout << "\\";
       for(int j=0;j<inner;j++){
        cout << " ";
       }
        cout << "/";
       cout <<endl;
       outer++;
       inner-=2;
    }
     for(int i=0;i<outer;i++){
        cout << " ";
       }
       cout << "X";
       cout <<endl;
    outer--;
    inner=1;
    for(int i=0;i<n/2;i++){
       for(int j=0;j<outer;j++){
        cout << " ";
       }
       cout << "/";
       for(int j=0;j<inner;j++){
        cout << " ";
       }
        cout << "\\";
       cout <<endl;
       outer--;
       inner+=2;
    }

    return 0;
}
