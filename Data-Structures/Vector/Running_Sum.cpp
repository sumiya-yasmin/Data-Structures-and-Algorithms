// Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
// Note: Solve this problem using function and Vector. 
// Input
// The first line contains an integer n representing the size of the array.
// The second line contains n integers representing the elements of the array nums.
// Output
// Print the running sum of the array as a sequence of integers separated by spaces.
#include <bits/stdc++.h>
using namespace std;
vector<long long int> running_sum(vector<int> arr, int n){
    vector<long long int> pre_sum(n);
  for(int i=0;i<n;i++){
    if(i==0){
        pre_sum[i]=arr[i];
    }else{
        pre_sum[i]=pre_sum[i-1]+arr[i];
    }
  }
  return pre_sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    vector<long long int> result_sum=running_sum(arr,n);
    for(long long int sum : result_sum){
         cout << sum << " ";
    }
    return 0;
}