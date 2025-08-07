#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl; // Should print 30
    pq.push(100);
    cout << pq.top() << endl; // Should print 100
    pq.pop(); // 100
    pq.pop(); //30
    cout << pq.top() << endl; // Should print 10
    pq.empty(); // Check if the queue is empty
    cout << (pq.empty() ? "Queue is empty" : "Queue is not empty") << endl; // Should print "Queue is not empty"
   return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
