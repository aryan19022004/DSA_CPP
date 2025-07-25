#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Program to Rearrange the array according to the sign

  /*
     Time complexity: O(n)
     Space complexity: O(n)
  
  */
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


    return 0;
}
