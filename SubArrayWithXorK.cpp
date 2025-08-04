#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countSubarraysWithXorK(vector<int>& arr, int k) {
    unordered_map<int, int> xorCount;
    int count = 0;
    int prefixXOR = 0;

    for (int num : arr) {
        prefixXOR ^= num;

        if (prefixXOR == k) {
            count++;
        }

        int x = prefixXOR ^ k;
        if (xorCount.find(x) != xorCount.end()) {
            count += xorCount[x];
        }

        xorCount[prefixXOR]++;
    }

    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;

    int result = countSubarraysWithXorK(arr, k);
    cout << "Number of subarrays with XOR = " << k << ": " << result << endl;

    return 0;
}
