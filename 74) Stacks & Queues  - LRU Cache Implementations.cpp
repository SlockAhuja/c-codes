// 74) Stacks & Queues  : LRU Cache Implementations

#include <bits/stdc++.h>
using namespace std;

class LRU {
int cap;
list<pair<int,int>> dq;                 
unordered_map<int, list<pair<int,int>>::iterator> mp;

public:
LRU(int c) { cap = c; }

int get(int k) {
if (!mp.count(k)) return -1;
auto it = mp[k];
int val = it->second;
dq.erase(it);
dq.push_front({k, val});
mp[k] = dq.begin();
return val;
    }

void put(int k, int v) {
if (mp.count(k)) dq.erase(mp[k]);
else if (dq.size() == cap) {
auto last = dq.back();
mp.erase(last.first);
dq.pop_back();
        }
dq.push_front({k, v});
mp[k] = dq.begin();
    }
};

int main() {
LRU l(2);
l.put(1,10);
l.put(2,20);
cout << l.get(1) << endl;
l.put(3,30);
cout << l.get(2) << endl;
}
