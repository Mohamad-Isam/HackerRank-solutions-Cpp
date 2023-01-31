#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
int ans = 0;
    for( size_t i = 0; i < s.length(); i += 3 ){
        if( s[i] != 'S' ) ans++;
        if( s[i+1] != 'O' ) ans++;
        if( s[i+2] != 'S' ) ans++;
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
