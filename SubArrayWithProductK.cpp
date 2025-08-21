#include <bits/stdc++.h>
using namespace std;

bool subarrayProduct(vector<int>& arr, int target) {
    int n = arr.size();
    long long product = 1;
    int left = 0;

    for (int right = 0; right < n; right++) {
        product *= arr[right];

        while (product > target && left <= right) {
            product /= arr[left];
            left++;
        }

        if (product == target) {
            cout << "Subarray found from index " << left << " to " << right << endl;
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 3, 4, 1, 6};
    int target = 12;

    if (!subarrayProduct(arr, target)) {
        cout << "No subarray with product equal to target found" << endl;
    }

    return 0;
}
