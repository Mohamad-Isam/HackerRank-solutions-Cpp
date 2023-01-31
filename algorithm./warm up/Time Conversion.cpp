#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string w;
    int hour = 10 *(s[0] - '0') + (s[1] - '0');
    if(s[8] == 'P' && hour != 12) hour += 12;
    if(s[8] == 'A' && hour == 12) hour -= 12;
    if(hour < 10) w = "0" + to_string(hour);
    else w = to_string(hour);
    return w + s[2] + s[3] + s[4] + s[5] + s[6] + s[7];
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
