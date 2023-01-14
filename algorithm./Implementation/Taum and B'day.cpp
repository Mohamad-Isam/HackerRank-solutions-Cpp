#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'taumBday' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER b
 *  2. INTEGER w
 *  3. INTEGER bc
 *  4. INTEGER wc
 *  5. INTEGER z
 */

long long taumBday(long b, long w, long bc, long wc, long z) {
long long n1 = b * bc + w * wc;
long long n2 = bc * (b + w) + w * z;
long long n3 =  wc * (b + w) + b * z;

if(n1 <= n2 && n1 <= n3) return n1;
else if(n2 <= n1 && n2 <= n3) return n2;
else if(n3 <= n2 && n3 <= n1) return n3;

return n1;

}

/*
617318315833461267
711232858900355655
1306346564995590229
253435467783263923
158694707102490425
783234000390521730
185809605416820942
155917081637180036
240076105402801530
430963577188284828
*/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int b = stoi(first_multiple_input[0]);

        int w = stoi(first_multiple_input[1]);

        string second_multiple_input_temp;
        getline(cin, second_multiple_input_temp);

        vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

        int bc = stoi(second_multiple_input[0]);

        int wc = stoi(second_multiple_input[1]);

        int z = stoi(second_multiple_input[2]);

        long result = taumBday(b, w, bc, wc, z);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
