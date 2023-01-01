/*
prepare > algorithm > string > game of thrones - I
problem : 

Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through
which the enemy can enter his kingdom.

But, to lock the door he needs a key that is an anagram of a palindrome. He starts to go through his box of strings, checking to see if they can be rearranged into a palindrome. Given a string,
determine if it can be rearranged into a palindrome. Return the string YES or NO.
*/
//solution

//ok, to really understand it , if the string is even (number of letters are even) the each letter must appear even times..
// and if the string is odd , each letter must appear even except one letter .. 
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
