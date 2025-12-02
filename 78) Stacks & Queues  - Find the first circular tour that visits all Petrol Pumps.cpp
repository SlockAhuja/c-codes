//78) Stacks & Queues  : Find the first circular tour that visits all Petrol Pumps
#include <iostream>
#include <vector>
using namespace std;

int firstCircularTour(vector<int>& petrol, vector<int>& dist) {
    int n = petrol.size();
    int start = 0, deficit = 0, balance = 0;

for (int i = 0; i < n; i++) {
        balance += petrol[i] - dist[i];

if (balance < 0) {
        start = i + 1;
        deficit += balance;
        balance = 0;
        }
    }
return (balance + deficit >= 0) ? start : -1;
}

int main() {
    vector<int> petrol  = {4, 6, 7, 4};
    vector<int> dist    = {6, 5, 3, 5};

    int ans = firstCircularTour(petrol, dist);

    cout << "First Circular Tour starts at index: " << ans;
    return 0;
}
