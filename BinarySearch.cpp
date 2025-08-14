#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int>arr = {1,2,3,4,5,6,7,8};
   int n = arr.size();
   int start = 0,end = n-1;
    int target = 7;
    while(start<=end){
        int mid = (arr[start] + arr[end])/2;
        if(mid>target){
            end--;
        }else if(target>mid){
            start ++;
        }else{
            cout<<"Element Found at Index :"<<mid -1;
            return 0;
        }
    }
    cout<<"Element Not Found";
    return 0;
}
