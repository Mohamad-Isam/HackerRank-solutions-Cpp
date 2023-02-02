#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'decentNumber' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void decentNumber(int n) {
string word = "";
if(n < 3 || n == 4 || n == 7) cout << -1 << endl;
else if(n % 3 == 0)
{
    for(int i = 0; i < n; i++)
        word += "5";
    cout << word << endl;
}
else if(n % 3 != 0)
{
    int threes = 0;
    int num = n;
    while(num && num % 3)
    {
        threes++;
        num -= 5;
    }
    for(int i = 0; i < num; i++)
        word += "5";
    for(int i = 0; i < threes; i++)
        word += "33333";
    cout << word << endl;
}
// else if(n % 5 == 0)
// {
//     for(int i = 0; i < n; i++)
//         word += "3";
//     cout << word << endl;
// }

// else{
//     int threes = 1;
//     n -= 3;
//     while(n % 5 && n)
//     {
//         n -= 3;
//         threes++;
//     }
//     for(int i = 0; i < threes; i++)
//         word += "555";
//     for(int i = 0; i < n; i++)
//         word += "3";
//     cout << word << endl;
// }
/*

-1
-1
555
-1
33333
555555
-1
55533333
555555555
3333333333

*/
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

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
