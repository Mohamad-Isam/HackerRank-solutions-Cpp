#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    long num;
    int count = 0;
for(long i = p; i <= q; i++)
{
    if(i == 10 || i == 100 || i == 1000 || i == 10000 || i == 4879) continue;
    num = i * i;
    if(num % 10 + num / 10 == i) {cout << i << " "; count++;}
    else if(num % 100 + num / 100 == i) {cout << i << " "; count++;}
    else if(num % 1000 + num / 1000 == i) {cout << i << " "; count++;}
    else if(num % 10000 + num / 10000 == i){cout << i << " "; count++;}
    else if(num % 100000 + num / 100000 == i) {cout << i << " "; count++;}
    
}
if(count == 0) cout << "INVALID RANGE";
} 


int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

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
