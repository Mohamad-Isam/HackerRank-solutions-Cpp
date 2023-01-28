#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    } 
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        int x = lower_bound(v.begin(), v.end(), m) - v.begin();
        if (v[x] == m) cout << "Yes " << x + 1 << endl;
        else cout << "No " << x + 1 << endl;
    }
    return 0;
}
