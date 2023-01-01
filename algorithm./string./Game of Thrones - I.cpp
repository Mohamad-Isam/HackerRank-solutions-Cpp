string gameOfThrones(string s) {
  //sorting the letters so every letter and its duplicates align together
    sort(s.begin(), s.end());
    int even = 0; // setting the even counter
    for(unsigned int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1]) {even++; i++;}
    }
    if(s.size() % 2) // if the string number of letters are odd this will be true
      //you can understand this if you let the letters for example 9 .. if every letter in the string appears even times except one letter then the
      //even counter will be 4 .. then 2 * 4 + 1 will be 9 which is the same size of the string
        return even * 2 + 1 == s.size() ? "YES" : "NO";
    else // if number of letters in the string are even
      //and here if the size of the string is 8 and all the letters in it appear even times . .then the even counter will be 4 ..
      //then 4 * 2 will be the same as the size of the string.
        return even * 2 == s.size() ? "YES" : "NO";
 
}
