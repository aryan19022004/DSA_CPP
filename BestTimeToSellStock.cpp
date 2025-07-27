#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 1, 1, 1, 3};
    int n = arr.size();

    int minPrice = INT_MAX;   // Track min price so far
    int maxProfit = 0;

    int buyDay = -1;   // Final answer
    int sellDay = -1;
    int tempBuyDay = 0;  // Possible buy day

    for(int i = 0; i < n; i++){
        if(arr[i] < minPrice){
            minPrice = arr[i];
            tempBuyDay = i;  // Possible buy index
        } else {
            int profit = arr[i] - minPrice;
            if(profit > maxProfit){
                maxProfit = profit;
                buyDay = tempBuyDay;
                sellDay = i;
            }
        }
    }

    if(maxProfit > 0){
        cout << "Buy on day " << buyDay << " (Price = " << arr[buyDay] << ")\n";
        cout << "Sell on day " << sellDay << " (Price = " << arr[sellDay] << ")\n";
        cout << "Maximum Profit: " << maxProfit << endl;
    } else {
        cout << "No profit can be made.\n";
    }

    return 0;
}
