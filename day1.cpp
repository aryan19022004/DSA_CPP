#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {5,4,6,2,7};
    //BruteForce solution 
    /*the brute force solution with be like choosing the last element after sorting the arry in ascending order*/

    //Optimal solution
    int largest = arr[0];
    for(int i =1;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"the largest number of the array is "<<largest;
    return 0;
}
