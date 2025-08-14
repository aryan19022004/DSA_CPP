// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1, 2, -1, 4, 5};
    int n = arr.size();
    int k = 1;
    unordered_map<int,int>mpp;
    mpp[0] = 1;
    int presum = 0,cnt = 0;
    for(int i = 0;i<n;i++){
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    
    cout<<"Total Sub Arrays are the "<<cnt;
    return 0;
}
