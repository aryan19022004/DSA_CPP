// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int> arr = {1,2,3,4,5,6,10};
   int n = arr.size();
   int diff = 0;
   int num = 0;
   for(int i = 0;i<n-1;i++){
       if(arr[i+1] - arr[i] != 1){
            diff = arr[i+1] - arr[i];
            num = arr[i];
           break;
       }
   }
   
    cout<<"Missing NUMBERS ARE : ";
   for(int i = 1;i<diff;i++){
       cout<<num +i<<" "; ;
   }
  
    return 0;
}
