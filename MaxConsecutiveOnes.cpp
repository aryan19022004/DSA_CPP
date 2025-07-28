// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {1,1,1,0,1,1,1,1,0,1,1,1,1,1,1};
    int n = arr.size();
    int count = 0,maxlen=0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            count++;
        }else{
           maxlen =  max(maxlen,count);
           count = 0;
        }
    }
      maxlen = max(maxlen, count);
    cout<<"The maximum number of the consecutive ones is : "<<maxlen;

    return 0;
}
