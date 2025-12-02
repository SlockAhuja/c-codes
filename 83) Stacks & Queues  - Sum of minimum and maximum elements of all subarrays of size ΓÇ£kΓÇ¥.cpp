//83) Stacks & Queues  : Sum of minimum and maximum elements of all subarrays of size “k”.
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int sumMinMax(vector<int>& arr, int k) {
    deque<int> mn, mx;
    int n = arr.size(), sum = 0;

    for (int i = 0; i < n; i++) {
 
 // Remove out-of-window elements
 if (!mn.empty() && mn.front() <= i - k) mn.pop_front();
 if (!mx.empty() && mx.front() <= i - k) mx.pop_front();

        // Remove bigger elements for min
        while (!mn.empty() && arr[mn.back()] >= arr[i]) mn.pop_back();
        // Remove smaller elements for max
        while (!mx.empty() && arr[mx.back()] <= arr[i]) mx.pop_back();

        mn.push_back(i);
        mx.push_back(i);

        // When we have first window
        if (i >= k - 1) {
            sum += arr[mn.front()] + arr[mx.front()];
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout << sumMinMax(arr, k);
}
