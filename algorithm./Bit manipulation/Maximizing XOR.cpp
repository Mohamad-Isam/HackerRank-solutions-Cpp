#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maximizingXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */
 
  string decToBin(int n)
 {
     int v1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string result;
    int i = 0;
    while(n)
    {
        v1[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int i = 9; i >= 0; i--)
        result += to_string(v1[i]);

    return result;
 }
 
int XOR(string x, string y)
{
    int result = 0;
    string s = "0000000000";
    for(int i = 0, j = 9; i < 10; i++, j--)
    {
        if(x[i] != y[i])
            s[i] = '1';
        else
            s[i] = '0';
        if(s[i] == '1')
            result += pow(2, j);
    }
    return result;
}

int maximizingXor(int l, int r) {
int maximum = 0;
for(int i = l; i <= r; i++)
{
    for(int j = i; j <= r; j++)
    {
        if(XOR(decToBin(i), decToBin(j)) > maximum)
            maximum = XOR(decToBin(i), decToBin(j));
    }
    
}
return maximum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string r_temp;
    getline(cin, r_temp);

    int r = stoi(ltrim(rtrim(r_temp)));

    int result = maximizingXor(l, r);

    fout << result << "\n";

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
