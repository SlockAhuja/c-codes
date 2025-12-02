//84) Stacks & Queues  : Minimum sum of squares of character counts in a given string after removing “k” characters.
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int minSumSquares(string s, int k) {
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    priority_queue<int> pq;
    for (int f : freq) if (f > 0) pq.push(f);

    while (k-- && !pq.empty()) {
        int top = pq.top(); pq.pop();
        top--;
        if (top > 0) pq.push(top);
    }

    int sum = 0;
    while (!pq.empty()) {
        int x = pq.top(); pq.pop();
        sum += x * x;
    }
    return sum;
}

int main() {
    string s = "abccc";
    int k = 1;
    cout << minSumSquares(s, k);
}
