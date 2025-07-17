#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Program to Find the Longest sub Array with summation K
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int n = arr.size();
    /*
     BRUTEFORCE Solution
     1. First we will find the all Possible sub arrays from the array then we will check
         that wheather summation matches target and is it longest or not

             Time Complexity ---- O(n3)

         int len = 0;
          for(int i =0;i<n;i++){
           for(int j =i;j<n;j++){
               int sum = 0;
             for(int k=i;k<=j;k++){
               sum +=arr[k];
             }
              if(sum == target){
               len = max(len,j-i+1)
            }
           }
          }
    */
    return 0;
}

