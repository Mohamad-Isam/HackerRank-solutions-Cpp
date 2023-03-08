#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {    
string minutes, result;
if(m == 0)
    minutes = "o' clock";
if(m == 1)
    minutes = "one minute past";
if(m == 2)
    minutes = "two minutes past";
if(m == 3)
    minutes = "three minutes past";
if(m == 4)
    minutes = "four minutes past";
if(m == 5)
    minutes = "five minutes past";
if(m == 6)
    minutes = "six minutes past";
if(m == 7)
    minutes = "seven minutes past";
if(m == 8)
    minutes = "eight minutes past";
if(m == 9)
    minutes = "nine minutes past";
if(m == 10)
    minutes = "ten minutes past";
if(m == 11)
    minutes = "eleven minutes past";
if(m == 12)
    minutes = "twelve minutes past";
if(m == 13)
    minutes = "thirteen minutes past";
if(m == 14)
    minutes = "forteen minute past";
if(m == 15)
    minutes = "quarter past";
if(m == 16)
    minutes = "sixteen minutes past";
if(m == 17)
    minutes = "seventeen minutes past";
if(m == 18)
    minutes = "eighteen minutes past";
if(m == 19)
    minutes = "ninteen minutes past";
if(m == 20)
    minutes = "twenty minutes past";
if(m == 21)
    minutes = "twenty one minutes past";
if(m == 22)
    minutes = "twenty two minutes past";
if(m == 23)
    minutes = "twenty three minutes past";
if(m == 24)
    minutes = "twenty four minutes past";
if(m == 25)
    minutes = "twenty five minutes past";
if(m == 26)
    minutes = "twenty six minutes past";
if(m == 27)
    minutes = "twenty seven minutes past";
if(m == 28)
    minutes = "twenty eight minutes past";
if(m == 29)
    minutes = "twenty nine minutes past";
if(m == 30)
    minutes = "half past";
if(m == 31)
    {minutes = "twenty nine minutes to";
    h++;}
if(m == 32)
    {minutes = "twenty eight minutes to";
    h++;}
if(m == 33)
    {minutes = "twenty seven minutes to";
    h++;}
if(m == 34)
    {minutes = "twenty six minutes to";
    h++;}
if(m == 35)
    {minutes = "twenty five minutes to";
    h++;}
if(m == 36)
    {minutes = "twenty four minutes to";
    h++;}
if(m == 37)
    {minutes = "twenty three minutes to";
    h++;}
if(m == 38)
    {minutes = "twenty two minutes to";
    h++;}
if(m == 39)
    {minutes = "twenty one minutes to";
    h++;}
if(m == 40)
    {minutes = "twenty minutes to";
    h++;}
if(m == 41)
    {minutes = "ninteen minutes to";
    h++;}
if(m == 42)
    {minutes = "eighteen minutes to";
    h++;}
if(m == 43)
    {minutes = "seventeen minutes to";
    h++;}
if(m == 44)
    {minutes = "sixteen minutes to";
    h++;}
if(m == 45)
    {minutes = "quarter to";
    h++;}
if(m == 46)
    {minutes = "forteen minutes to";
    h++;}
if(m == 47)
    {minutes = "thirteen minutes to";
    h++;}
if(m == 48)
    {minutes = "twelve minutes to";
    h++;}
if(m == 49)
    {minutes = "eleven minutes to";
    h++;}
if(m == 50)
    {minutes = "ten minutes to";
    h++;}
if(m == 51)
    {minutes = "nine minutes to";
    h++;}
if(m == 52)
    {minutes = "eight minutes to";
    h++;}
if(m == 53)
    {minutes = "seven minutes to";
    h++;}
if(m == 54)
    {minutes = "six minutes to";
    h++;}
if(m == 55)
    {minutes = "five minutes to";
    h++;}
if(m == 56)
    {minutes = "four minutes to";
    h++;}
if(m == 57)
    {minutes = "three minutes to";
    h++;}
if(m == 58)
    {minutes = "two minutes to";
    h++;}
if(m == 59)
    {minutes = "one minute to";
    h++;}
if(h == 13) h = 1;

if(h == 1)
    result = minutes + " " + "one";
if(h == 2)
    result = minutes + " " + "two";
if(h == 3)
    result = minutes + " " + "three";
if(h == 4)
    result = minutes + " " + "four";
if(h == 5)
    result = minutes + " " + "five";
if(h == 6)
    result = minutes + " " + "six";
if(h == 7)
    result = minutes + " " + "seven";
if(h == 8)
    result = minutes + " " + "eight";
if(h == 9)
    result = minutes + " " + "nine";
if(h == 10)
    result = minutes + " " + "ten";
if(h == 11)
    result = minutes + " " + "eleven";
if(h == 12)
    result = minutes + " " + "twelve";
if(h == 1 && m == 0)
    result = "one o' clock";
if(h == 2 && m == 0)
    result = "two o' clock";
if(h == 3 && m == 0)
    result = "three o' clock";
if(h == 4 && m == 0)
    result = "four o' clock";
if(h == 5 && m == 0)
    result = "five o' clock";
if(h == 6 && m == 0)
    result = "six o' clock";
if(h == 7 && m == 0)
    result = "seven o' clock";
if(h == 8 && m == 0)
    result = "eight o' clock";
if(h == 9 && m == 0)
    result = "nine o' clock";
if(h == 10 && m == 0)
    result = "ten o' clock";
if(h == 11 && m == 0)
    result = "eleven o' clock";
if(h == 12 && m == 0)
    result = "twelve o' clock";
    
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

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
