#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithXor(vector<int>& arr, int target) {
    unordered_map<int, int> freq;
    int count = 0, prefixXor = 0;

    for (int num : arr) {
        prefixXor ^= num;

        if (prefixXor == target) count++;


        int need = prefixXor ^ target;
        if (freq.find(need) != freq.end()) {
            count += freq[need];
        }


        freq[prefixXor]++;
    }
    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int target = 6;
    cout << "Count of subarrays with XOR = " << target << " : "
         << countSubarraysWithXor(arr, target) << endl;
    return 0;
}
