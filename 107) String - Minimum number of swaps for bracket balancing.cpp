// 107) String : Minimum number of swaps for bracket balancing.
#include <iostream>
using namespace std;

int minSwaps(string s) {
    int countOpen = 0, imbalance = 0, swaps = 0;

    for (char c : s) {
        if (c == '[') {
            countOpen++;
            if (imbalance > 0) { 
                swaps += imbalance; 
                imbalance--;       
            }
        } 
        else { // ']'
            if (countOpen > 0) 
                countOpen--;     
            else 
                imbalance++;     
        }
    }
    return swaps;
}

int main() {
    string s = "[]][][";
    cout << minSwaps(s);
    return 0;
}
