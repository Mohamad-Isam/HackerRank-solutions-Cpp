#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
 string makeWord(int from, int theSize, string s)
{
    string word;
    int i = from;
    int k = theSize;
    while(k--)
    {
        word += s[i];
        i++;
        if(i == s.size())
            break;
    }
    return word.size() == theSize ? word : "";
}

int sherlockAndAnagrams(string name) {
    int counter = 0;
    for(int k = 1; k < name.size(); k++)
    {
        for(int i = 0; i < name.size(); i++)
        {
            string s1 = makeWord(i, k, name);
            sort(s1.begin(), s1.end());
            for(int j = i + 1; j < name.size(); j++)
            {
                string s2 = makeWord(j, k, name);
                sort(s2.begin(), s2.end());
                if(s1 == s2 && s2 != "")
                    counter++;
            }
        }
    }

    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

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
