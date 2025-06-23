/*
 Time comlexity ---> O(n)
 Space complexity ---> O(1)
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 0, 0, 2, 2, 0, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = -1;

    // Find the index of the first 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) {
        cout << "There is no zero in the array.";
        return 0;
    }

    // Move non-zero elements forward and push zeros to the end
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
