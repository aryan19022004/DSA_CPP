#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Program to Find the Longest sub Array with summation K
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int n = arr.size();
    /*
     BRUTEFORCE Solution
     1. First we will find the all Possible sub arrays from the array then we will check
         that wheather summation matches target and is it longest or not

             Time Complexity ---- O(n3)

         int len = 0;
          for(int i =0;i<n;i++){
           for(int j =i;j<n;j++){
               int sum = 0;
             for(int k=i;k<=j;k++){
               sum +=arr[k];
             }
              if(sum == target){
               len = max(len,j-i+1)
            }
           }
          }
    */
/*   Better solution       ********************* It is optimal when elements are only positive and negatives   and better in case of Positive And Zeros
    int k = 10;
    int sum = 0;
    int maxLen = 0;
    map<int,int>preSumMap;
    for(int i =0;i<n;i++){
      sum+=arr[i];
      if(sum == k){
        maxLen = max(maxLen,i+1);
      }
      int rem = sum -k;
      if(preSumMap.find(rem)!= preSumMap.end()){
        int len = i - preSumMap[rem];
        maxLen = max(maxLen,len);
      }

     if(preSumMap.find(sum) == preSumMap.end())
        {preSumMap[sum] = i;}
    }
    cout<<"Max length is "<<maxLen;
    return 0;
}
*/

/*
  ************************* Optimal Solution*******************
 vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 10;  // <-- You forgot this
    int n = arr.size();

    int sum = arr[0];
    int maxLen = 0;
    int left = 0, right = 0;

    while (right < n) {
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
            sum += arr[right];
    }

    cout << "Length of Longest Subarray with sum " << k << " is: " << maxLen << endl;


    ************************************************OR***********************

    #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 1, 1, 1, 3};
    int target = 9;
    int sum = 0;
    int left = 0;

    int maxLen = 0;
    int startIndex = -1;
    int endIndex = -1;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        // Shrink window from left if sum > target
        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        // If sum == target, check for max length
        if (sum == target) {
            int currLen = right - left + 1;
            if (currLen > maxLen) {
                maxLen = currLen;
                startIndex = left;
                endIndex = right;
            }
        }
    }

    if (maxLen > 0) {
        cout << "Longest subarray with sum " << target << " is: [ ";
        for (int i = startIndex; i <= endIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << "]\nLength: " << maxLen << endl;
    } else {
        cout << "No subarray found\n";
    }

    return 0;
  
*/
