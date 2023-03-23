#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'weightedUniformStrings' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER_ARRAY queries
 */

vector<string> weightedUniformStrings(string s, vector<int> queries){
    int counter = 0;
    string word;
    vector<int> v;
    vector<string> result;
    for(unsigned int i = 0; i < s.size() ; i++)
    {
        if(word == "" || word[0] == s[i])
        {
            word += s[i];
            counter += int(s[i] - 96);
        }
        else if(word[0] != s[i])
        {
            word = "";
            counter = 0;
            word += s[i];
            counter += int(s[i] - 96);
        }
        v.push_back(counter);
    }
    bool isThere;
    for(unsigned i = 0; i < queries.size(); i++)
    {
        isThere = false;

        for(unsigned j = 0; j < v.size(); j++)
        {
            if(queries[i] == v[j])
            {
                isThere = true;
                break;
            }
        }
        if(isThere == true)
            result.push_back("Yes");
        else
            result.push_back("No");
    }
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string queries_count_temp;
    getline(cin, queries_count_temp);

    int queries_count = stoi(ltrim(rtrim(queries_count_temp)));

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item_temp;
        getline(cin, queries_item_temp);

        int queries_item = stoi(ltrim(rtrim(queries_item_temp)));

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
