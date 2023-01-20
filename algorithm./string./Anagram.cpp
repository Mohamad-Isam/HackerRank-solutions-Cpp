#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int anagram(string s) {
    if(s.size() % 2) return -1;
string s1, s2;
int count = 0;
for(unsigned int i = 0; i < s.size(); i++)
{
    if(i < s.size() / 2) s1 += s[i];
    else s2 += s[i];
}
for(char x : s1)
{
    for(unsigned int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == x)
        {
            s2.erase(s2.begin() + i);
            break;
        }
    }
}
return s2.size();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
