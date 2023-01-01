int stringConstruction(string s) {
//we can calculate the letters after removing the duplicates, by this way we have a string that no letter is a copy of another
sort(s.begin(), s.end());
s.erase(unique(s.begin(), s.end()), s.end());
  
// then we calculate the numbers of letters and that's the numbers of money we need.
return s.size();
}
