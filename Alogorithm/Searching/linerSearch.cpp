#include <bits/stdc++.h>
using namespace std;


// Time complexity O(n),Space Complexity O(1)


int main() {

    int n;
    cin >> n;

    int a[n];   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Found at index " << index << '\n';
    else
        cout << "Not Found\n";

    return 0;
}
