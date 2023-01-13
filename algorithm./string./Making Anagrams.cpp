#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
int total_size = s1.length() + s2.length(); 
int count = 0;
for(unsigned int i = 0; i < s1.length(); i++)
{
    for(unsigned int j = 0; j < s2.length(); j++)
    {
        if(s1[i] == s2[j])
        {
            count++;
            s1.erase(s1.begin() + i);
            s2.erase(s2.begin() + j);
            i--;
            break;
        }
    }
}
return total_size - 2 * count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
