// 42) LinkedList : Deletion from a Circular Linked List.

#include <iostream>
using namespace std;

int main() {
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int n = 3, m = 3;

cout << "Wave form: ";
for (int col = 0; col < m; col++) {
if (col % 2 == 0)
for (int row = 0; row < n; row++)
cout << arr[row][col] << " ";
else
for (int row = n - 1; row >= 0; row--)
cout << arr[row][col] << " ";
    }
}
