// 118) Bit Manipulation : Power Set
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> set = {1, 2, 3}; // Example set
    int n = set.size();
    
    for(int i = 0; i < (1 << n); i++) { // 2^n subsets
        cout << "{ ";
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) cout << set[j] << " ";
        cout << "}\n";
    }
}
