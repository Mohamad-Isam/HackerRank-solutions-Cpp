#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x, y, del1, del2;
    vector<int> v;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        cin >> y;
        v.push_back(y);
    }
    cin >> del1;
    v.erase(v.begin() + del1 - 1);
    cin >> del1 >> del2;
    v.erase(v.begin() + del1 - 1, v.begin() + del2 - 1);
    cout << v.size() << endl;
    for(size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
