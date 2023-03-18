#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    int count = 0, small = 0, capital = 0, nums = 0, chars = 0;
    for(char a : password){
        if(a >= 'a' && a <= 'z') small = 1;
        if(a >= 'A' && a <= 'Z') capital = 1;
        if(a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9') nums = 1;
        //"!@#$%^&*()-+"
        if(a == '!' || a == '@' ||  a == '#' || a == '$' || a == '%' || a == '^' || a == '&' || a == '*' || a == '(' || a == ')' || a == '-' || a == '+') chars = 1;
    }
    if(small == 0)count++;
    if(capital == 0)count++;
    if(nums == 0)count++;
    if(chars == 0)count++;
    int m = 6 - n;
    if(m >= count) return m;
    else return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

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
