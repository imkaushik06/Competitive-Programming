#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }     

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << &(min_element(v.begin() + l, v.begin() + r + 1)) << endl;
    }
    return 0;
}