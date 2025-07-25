#include <iostream>

using namespace std;

int main()
{
    // Program to rotate an array by 3 places
  /*
        BETTER SOLUTION
        Time complexity = O(n+d)
        Space complexity   = O(d)
  */
    int arr[7] = {1,1,2,2,3,6,7};
    int d = 3%7;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i = d;i<7;i++){
        arr[i-d] = arr[i];
    }
    for(int i = 7-d;i<7;i++){
        arr[i] = temp[i - (7-d)];
    }

    for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    /* 
     Optimal solution   with Time complexity = O(n)    space complexity = O(1)
    */

      int d = 3%7;
    reverse(arr,arr+d);
    reverse(arr+d,arr+7);
    reverse(arr,arr+7);

    for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
