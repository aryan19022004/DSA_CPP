    //PROGRAM TO FIND THE SECOND LARGEST NUMBER IN A ARRAY
#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {5,4,6,2,7,999,99,10000,9999};
    //BruteForce solution
    /* 
    1. choosing the 2nd last element after sorting an array
    2. here the time complexity of sorting will be O(n2) 
    */

    //Better solution
    int largest = arr[0];
    for(int i =1;i<9;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int second_largest = -1;
    for(int i= 0;i<9;i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest = arr[i];
        }
    }
    //O(n) + 0(n) --> it will be 0(2n) here in better solution we are traversing the array twice 

    //Optimal solution
    /*
      Here we are traversing the array single time so here time complexity will be O(n)
    */
    int largest = INT_MIN+1;
    int second_largest = INT_MIN;
    for(int i =0;i<9;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]> second_largest && arr[i]<largest){
            second_largest = arr[i];
        }
    }
    cout<<"the second largest number in the array is the "<< second_largest;
    return 0;
}
