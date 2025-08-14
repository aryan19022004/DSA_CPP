#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = INT_MIN;
    int currSum = 0;

    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];

        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        if (currSum < 0) {
            currSum = 0;
            tempStart = i + 1;
        }
    }

    // Print subarray
    cout << "Subarray with maximum sum: [ ";
    long long product = 1;
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
        product *= arr[i];
    }
    cout << "]" << endl;

    cout << "Maximum Sum: " << maxSum << endl;
    cout << "Product of Subarray: " << product << endl;

    return 0;
}
