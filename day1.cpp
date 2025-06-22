#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {5,4,6,2,7};
    
    
    int largest = arr[0];
    for(int i =1;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"the largest number of the array is "<<largest;
    return 0;
}
