#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num, n;
    vector<int> v;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> n;
        v.push_back(n);
    } 
    sort(v.begin(), v.end());
    for(int i = 0; i < num; i++)
        cout << v[i] << " ";
    return 0;
}
