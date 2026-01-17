#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    sort(a, a + n);

    int left = 0, right = n - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == key) {
            index = mid;
            break;
        } else if (key < a[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (index != -1)
        cout << "Found at index " << index << '\n';
    else
        cout << "Not Found\n";

    return 0;
}
