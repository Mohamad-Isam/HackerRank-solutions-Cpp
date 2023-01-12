#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
    int N = b.length();
    if(N == 1 && b[0] == '_') return "YES";
    if(N <= 1) return "NO";
    if(N == 2 && b[0] != b[1]) return "NO";
    bool underscore = 0;

for(unsigned int i = 0; i < N; i++)
    if(b[i] == '_'){underscore = true; break;}
    
if(!underscore)
{
    if(b[0] != b[1] || b[N - 1] != b[N - 2]) return "NO";
    for(unsigned int i = 1; i < N - 1; i++)
            if(b[i - 1] != b[i] && b[i] != b[i + 1]) return "NO";
  
    return "YES";
}
else
{
    sort(b.begin(), b.end());
    
    if(b[0] == b[N - 1]) return "YES";
    for(unsigned int i = 0; i < N; i++)
    {
        if(b[i] == '_')continue;
        else if(i == 0)
        {
            if(b[i] != b[i + 1]) return "NO";
        }
        else if(i == N - 1)
        {
            if(b[i] != b[i - 1]) return "NO";
        }
        else if(b[i - 1] != b[i] && b[i + 1] != b[i]) return "NO";
    }
    return "YES";
}
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

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
