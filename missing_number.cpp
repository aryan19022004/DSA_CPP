#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr1 = {1,2,3,5,6,7};
    int n = 7;
    int n1 = arr1.size();

    int sum = 0;
    for(int i =0;i<n1;i++){
        sum += arr1[i];
    }
    int total_sum = n * (n + 1) / 2;

    int missing_number = total_sum - sum;
    cout<<"missing number is the "<<missing_number;






    return 0;
}
