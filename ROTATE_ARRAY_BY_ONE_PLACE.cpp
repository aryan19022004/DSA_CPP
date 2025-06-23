#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1,1,2,2,3,6,7};
     for(int i =1;i<7;i++){
        arr[i-1] = arr[i];
     }
     arr[6] = arr[0];

     for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}

