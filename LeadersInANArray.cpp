#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int maxi = INT_MIN;
    vector<int> ans;
    int n = arr.size();

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxi) {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

    
    reverse(ans.begin(), ans.end());

    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}
