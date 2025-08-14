#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    int n = arr.size();
    int count = 0, maxlen = 0;
    int start = 0, end = 0;      // for current streak
    int maxStart = 0, maxEnd = 0; // for longest streak

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            if (count == 0) start = i; // new streak starts
            count++;
        } else {
            if (count > maxlen) {
                maxlen = count;
                maxStart = start;
                maxEnd = i - 1;
            }
            count = 0;
        }
    }

    // Final check after loop ends (in case array ends with 1s)
    if (count > maxlen) {
        maxlen = count;
        maxStart = start;
        maxEnd = n - 1;
    }

    cout << "The maximum number of consecutive ones is: " << maxlen << endl;
    cout << "From index " << maxStart << " to " << maxEnd << endl;

    return 0;
}
