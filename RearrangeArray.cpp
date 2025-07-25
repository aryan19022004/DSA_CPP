#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Program to Rearrange the array according to the sign

  /*   Better Solution
     Time complexity: O(n) + O(n)
     Space complexity: O(n)
  
  
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    vector<int>posArray;
    vector<int>NegArray;
    for(int i =0; i<n; i++)
    {
        if(arr[i]>0)
        {
            posArray.push_back(arr[i]);

        }
        else if(arr[i]<0)
        {
            NegArray.push_back(arr[i]);
        }
    }
    for(int i =0; i<n/2; i++)
    {
        arr[2*i] = posArray[i];
    }
    for(int i =0; i<n/2; i++)
    {
        arr[2*i+1] = NegArray[i];
    }

    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
*/

    /*
      Optimal Solution
     Time complexity: O(n)
     Space complexity: O(n)
    
     int n = arr.size();
    vector<int>ans(n,0);
    int posIndex = 0;
    int NegIndex = 1;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            ans[NegIndex] = arr[i];
            NegIndex +=2;
        }
        else if(arr[i]>0){
            ans[posIndex] = arr[i];
            posIndex +=2;
        }
    }
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    */

    return 0;
}
