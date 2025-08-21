#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int>& arr) {
    int n = arr.size();
    int result = arr[0]; // final answer

    int maxProd = arr[0]; // max product ending here
    int minProd = arr[0]; // min product ending here

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) swap(maxProd, minProd); // negative flip

        maxProd = max(arr[i], arr[i] * maxProd);
        minProd = min(arr[i], arr[i] * minProd);

        result = max(result, maxProd);
    }

    return result;
}

int main() {
    vector<int> arr = {2, 3, -2, 4, -1};
    cout << "Maximum product subarray = " << maxProductSubarray(arr) << endl;
    return 0;
}
