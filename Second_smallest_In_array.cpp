#include <iostream>

using namespace std;

int main()
{
    int arr[9] = {5,4,6,2,7,999,99,10000,9999};
    // BruteForce Solution
    /* 
    1. chhosing the 2nd element element of an array after sorting it in ascending
    2. time complexity will be time complexity of the sorting O(n2)
    */


  // Optimal solution
  /*
   1. Here we are traversing the array one time
   2. Time complexity will be O(n)
  */
    int smallest = INT_MAX;
    for(int i =0;i<9;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"the smallest number of the array is the "<<smallest;
    return 0;
}

