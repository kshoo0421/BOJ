#include <bits/stdc++.h>
using namespace std;

struct compare {
    bool operator()(const int& a, const int& b) {
        if (abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};

int main() {
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, compare> pq;
    while(n--)
    {
        cin >> x;

        if (x != 0) pq.push(x);
        else 
        {
            if (pq.empty()) cout << "0\n";            
            else 
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}