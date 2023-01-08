#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gemstones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY arr as parameter.
 */

int gemstones(vector<string> arr) {
    string s;
    int count = 0, character = 0;
  //i deleted all dublicates in every word so every gemstone will appear only once in a word
for(unsigned int i = 0; i < arr.size(); i++)
{
    sort(arr[i].begin(), arr[i].end());
    arr[i].erase(unique(arr[i].begin(), arr[i].end()), arr[i].end());
    s += arr[i];
}
  
  //I sum all words in one word and calculate every character .. if a character appears as many times as the original words in the array 
  //that means it's in every word because it appears once in every original word.
for(unsigned int i = 0; i < s.length(); i++)
{
    for(unsigned int j = i; j < s.length(); j++)
        {if(s[i] == s[j]) character++;}
    if(character == arr.size())count++;
    character = 0;
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

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
