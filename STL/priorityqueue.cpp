#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// priority_queue implementation in C++ STL
// It is typically implemented as a max-heap.
// it is sorted in descending order by default.(largest element at the top)
int solve()
{
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> minPq; // min-heap
    pq.push(10); // O(log n)
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    cout << "The priority queue elements are: ";
    int pqSize= pq.size(); // O(1)
    cout << "\nSize of priority queue: " << pqSize << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " "; // O(1)
        pq.pop();                // O(log n)
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}