#include <iostream>
#include <vector>
using namespace std;

// Function to put all 0s on the left and 
// all 1s on the right
void segregate0and1(vector<int>& arr) {
    int lo = 0;
    int hi = arr.size() - 1;

    while (lo < hi) {
      
        // If we have a 1 at lo
        if (arr[lo] == 1) {
          
            // And a 0 at hi
            if (arr[hi] != 1) {
                swap(arr[lo], arr[hi]);
                lo++;
                hi--;
            }
            else {          
                hi--;
            }  
        } else {
            lo++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 1};

    segregate0and1(arr);

    cout << "Array after segregation is ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}