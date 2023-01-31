#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
vector<int> v;
for(int i = 0; i < s.length(); i++)
    {if(s[i] != ' ')
        v.push_back(tolower(s[i]));}
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
return v.size() >= 26 ? "pangram" : "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
