#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // Program to find two elements whose sum = target (Two Sum)
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 9;

    /*
      Brute Force Solution is : we Can iterate the whole array for each element with 2 nested for loops   ***** TC = O(N2) ***************
    */
    /*

    Better Solution is : We can use a MAP then we can i terate a array single time  ************* - Time complexity: O(n log n)
       - Space complexity: O(n)
      map<int, int> mp;

      for (int i = 0; i < arr.size(); i++) {
          int complement = target - arr[i];
          if (mp.find(complement) != mp.end()) {
              cout << "Numbers found at indices " << mp[complement] << " and " << i << endl;
              return 0;
          }
          mp[arr[i]] = i;
      }

      cout << "No two numbers found with sum " << target << endl;

      */


    /*
     OPTIMAL SOLUTION
    Time Complexity: O(n log n)
    Space Complexity: O(1)



    int left = 0,right=arr.size() -1;
    sort(arr.begin(),arr.end());

    while(left<right){

        if(arr[left] + arr[right] == target){
            cout<<"Number Found At index "<<left<<" and "<<right;
            return 0;
        }
        else if(arr[left] + arr[right]<target){
            left++;
        }else{
        right --;}
    }
    cout<<"No such numbers";



    return 0;
    }

    */
    return 0;
}
