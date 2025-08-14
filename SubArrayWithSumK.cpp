#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};                                     /*  Time complexity: O(n)   ******   Space complexity: O(1)  */
    int target = 3;
    int sum = 0;  
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];


        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

       
        if (sum == target) {
            cout << "Subarray: [ ";
            for (int i = left; i <= right; i++) {
                cout << arr[i] << " ";
            }
            cout << "]\n";
            return 0;
        }
    }

    cout << "No subarray found\n";
    return 0;
}
