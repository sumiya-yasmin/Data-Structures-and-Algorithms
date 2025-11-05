// Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
// Note: Solve this problem using function and Vector. 
// Input
// The first line contains an integer n representing the size of the array.
// The second line contains n integers representing the elements of the array nums.
// Output
// Print the running sum of the array as a sequence of integers separated by spaces.
#include <bits/stdc++.h>
using namespace std;
vector<long long> running_sum(vector<int>& arr,int n){
    long long sum=0;
    vector<long long> cumulative_sums(n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        cumulative_sums[i]=sum;
    }
    return cumulative_sums;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<long long> result_sums = running_sum(arr,n);
    for(long long sum : result_sums){
        cout << sum << " ";
    }
    
    return 0;
}