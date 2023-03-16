#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    string word = "";
    int counter = 0;
    vector <string> v;
    for(unsigned int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
            {word += s[i];
            counter++;}
    }
    s = "";
    int rows = floor(sqrt(counter));
    int colomns = ceil(sqrt(counter));
    if(rows * colomns < counter)
        rows++;
    for(unsigned int i = 0; i < rows; i++)
    {
        for(unsigned int j = 0 + i * colomns; j < colomns + i * colomns; j++)
        {
            s += word[j];
        }
        v.push_back(s);
        s = "";
    }
    s = "";
    vector<string> result;
    result.resize(colomns);
    for(unsigned int i = 0; i < v.size(); i++)
    {
        for(unsigned int j = 0; j < colomns; j++)
        {
            result[j] += v[i][j];
        }
    }
    for(unsigned int i = 0; i< result.size(); i++)
    {
        for(int j = 0; j < result[i].size(); j++)
        {
            if(result[i][j] < 97 || result[i][j] > 122)
                result[i].erase(result[i].begin() + j);
        }
    }
    word = "";
    for(string x : result)
    {
        word += x;
        word += " ";
    }
    
    return word;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
