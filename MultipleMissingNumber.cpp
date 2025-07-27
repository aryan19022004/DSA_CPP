#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 5, 7, 8, 10};
    int n = arr.size();

    cout << "Missing numbers are: ";
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff > 1) {
            for (int j = 1; j < diff; j++) {
                cout << arr[i - 1] + j << " ";
            }
        }
    }

    return 0;
}
