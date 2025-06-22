    //PROGRAM TO FIND THE SECOND LARGEST NUMBER IN A ARRAY
#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {5,4,6,2,7,999,99,10000,9999};

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
