#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
string result;
for(unsigned int i = 0; i < s.size(); i++)
{
    if(s[i] == s[i + 1])
    {
        s.erase( s.begin() + i + 1);
        s.erase(s.begin() + i);
        i = -1;
    }  
}
return s.size() ? s : "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
