int lonelyinteger(vector<int> a) {
sort(a.begin(), a.end());
int x = a[0];
for(unsigned int i = 0; i < a.size(); i++)
{
    (a[i] != a[i + 1]) ? x = a[i] : i++;
}
return x;
}
