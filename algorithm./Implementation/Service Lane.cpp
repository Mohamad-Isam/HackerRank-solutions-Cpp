//there are two mistakes in the original code in hacker rank in the parameters and argument of function service lane
//so you should fix thoses first 
// 1 - first mistake is in first parameter of the function service lane .. instead of int n .. it should be (vector<int> width)
// 2 - second mistake is in the main function in the service lane function call .. you should replace the first argument ..instead of n .. write (width)
//and here is the solution after i fix it


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'serviceLane' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY cases
 */

vector<int> serviceLane(vector<int> width, vector<vector<int>> cases) {
    vector<int> result;
int minimum = 10;
for(unsigned int i = 0; i < cases.size(); i++)
{
    for(unsigned int j = cases[i][0]; j <= cases[i][1]; j++)
        if(width[j] < minimum) minimum = width[j];
    result.push_back(minimum);
    minimum = 10;
    
}
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int t = stoi(first_multiple_input[1]);

    string width_temp_temp;
    getline(cin, width_temp_temp);

    vector<string> width_temp = split(rtrim(width_temp_temp));

    vector<int> width(n);

    for (int i = 0; i < n; i++) {
        int width_item = stoi(width_temp[i]);

        width[i] = width_item;
    }

    vector<vector<int>> cases(t);

    for (int i = 0; i < t; i++) {
        cases[i].resize(2);

        string cases_row_temp_temp;
        getline(cin, cases_row_temp_temp);

        vector<string> cases_row_temp = split(rtrim(cases_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int cases_row_item = stoi(cases_row_temp[j]);

            cases[i][j] = cases_row_item;
        }
    }

    vector<int> result = serviceLane(width, cases);

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
