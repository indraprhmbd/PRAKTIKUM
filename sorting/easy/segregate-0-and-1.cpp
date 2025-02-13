#include <iostream>
#include <vector>
using namespace std;

// Function to segregate 0s and 1s
void segregate0and1(vector<int>& arr) {
  
    // Count 0s
    int count = 0; 
    for (int x : arr)
        if (x == 0)
            count++;

    // Fill the vector with 0s until count
    for (int i = 0; i < count; i++)
        arr[i] = 0;

    // Fill the remaining vector space with 1s
    for (int i = count; i < arr.size(); i++)
        arr[i] = 1;
}

int main() {
    vector<int> arr = { 0, 1, 0, 1, 1, 1,0,1,1,0 };

    segregate0and1(arr);
    cout << "Array after segregation is ";
    for (int x : arr)
        cout << x << " ";
    cout<<endl<<arr.size();
    return 0;
}