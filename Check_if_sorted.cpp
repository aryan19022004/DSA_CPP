#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,8,3,4,5};
    // Time complexity will be O(n)
    bool sorted = true;
    for(int i =1; i<5; i++)
    {
        if(arr[i]>= arr[i-1]){}
        else
        {
             sorted = false;
             break;
        }
    }
    cout<<sorted;

    return 0;
}

