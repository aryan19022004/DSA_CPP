#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {5,4,6,2,7,999,99,10000,9999};
  
     //BruteForce
     /*
     1. the brute force solution will be taking first element after sorting the array in ascending order
     2. the time compleity will be the time complexity of sorting ---. O(n2)
     */

  
  //Optimal solution
  /*
   1. Here we are traversing the array single time
   2. so here time complexity will be O(n)
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

