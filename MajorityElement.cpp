#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Program to find Mjority Element Of The array

  /*    

   BETTER SOLUTION 
  
             Time complexity: O(n)
             Space complexity: O(n)
  
  
    vector<int> arr = {1,2,2,3,3,3,4,4,4,4,4,4,4,4,7};
    map<int,int>mp;
    int n = arr.size();
    for(int i =0;i<n;i++){
        mp[arr[i]]++ ;
    }

   for(auto i:mp){
    if(i.second >n/2){
        cout<<"The majority element of the array is :"<<i.first;
        return 0;
    }
   }
   cout<<"There is no Such majority element";
   */

    /*
      Moore's Voting Algorighthm

      - Time Complexity: O(n)
      - Space Complexity: O(1)
      
    vector<int> arr = {1,2,2,3,3,3,4,4,4,4,4,4,4,4,7};
    int n = arr.size();
    int el = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(cnt == 0){
            el = arr[i];
            cnt++;
        }
        else if(arr[i] == el){
            cnt++;
        }else{
        cnt --;
        }
    }

    int cnt1 = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == el){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        cout<<"The majority element is the :"<<el;
        return 0;

    }

    cout<<"No Such Element";
    */

    return 0;
}
