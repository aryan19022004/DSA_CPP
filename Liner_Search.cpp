#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 0, 0, 2, 2, 0, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
     int target = 7;
     for(int i =0;i<n;i++){
        if(arr[i] == target){
            cout<<"element found";
            return 0;
        }
     }
     cout<<"No such element in this array";

    return 0;
}
