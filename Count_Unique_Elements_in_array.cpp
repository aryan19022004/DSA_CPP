#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,1,2,2,3};
    int i = 0;
    for(int j =1;j<5;j++){
        if(arr[i] !=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<"Number of unique elements in the arrays is "<<i+1;

    return 0;
}

