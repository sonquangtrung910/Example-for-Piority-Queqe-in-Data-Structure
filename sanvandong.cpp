#include <bits/stdc++.h>
using namespace std;

int main() {
    long long kq = 0;
    int m, n;
    cin >> m >> n;

    priority_queue<int> pq;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }


    for (int i = 0; i < n; i++) {
        int top = pq.top();
        pq.pop();
        kq += top;
        pq.push(top - 1);

    }

    cout << kq;
    return 0;
}
