/*
Prepare > Algorithms > Strings > String Construction
Problem : 
Amanda has a string of lowercase letters that she wants to copy to a new string. She can perform the following operations with the given costs. She can perform them any number of times to construct a new string P:

Append a character to the end of string P at a cost of 1 dollar.
Choose any substring of P and append it to the end of P at no charge.
Given n strings s[i], find and print the minimum cost of copying each  to  on a new line.
*/

int stringConstruction(string s) {
//we can calculate the letters after removing the duplicates, by this way we have a string that no letter is a copy of another
sort(s.begin(), s.end());
s.erase(unique(s.begin(), s.end()), s.end());
  
// then we calculate the numbers of letters and that's the numbers of money we need.
return s.size();
}
