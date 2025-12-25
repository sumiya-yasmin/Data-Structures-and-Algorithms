// Given a string S. Determine how many times does each letter occurred in S.
// Input
// Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.
// Output
// For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.
// Note: you must print letters in ascending order.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<string> s;
    string s;
    cin >> s;
    vector<int> freq(26);
    for(int i=0;i<s.size();i++){
      freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout << (char)(i +'a') << " : " << freq[i] << "\n";
        }
    }

    return 0;
}