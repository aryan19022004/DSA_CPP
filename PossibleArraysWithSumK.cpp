#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr ={1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    int target = 15;
    int left = 0;
    int sum = 0;
    for(int right = 0;right<n;right++){
         sum+=arr[right];
         
         while(sum>target && left <=right){
             sum -= arr[left];
             left++;
         }
         if(sum == target){
             cout<<"Sub array: ";
             for(int i = left ;i<=right;i++){
                 cout<<arr[i]<<" ";
             }
             cout<<endl;
         }
    }

    return 0;
}  
