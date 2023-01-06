long flippingBits(long n) {
vector<int> v(32, 1);
int i = 31; long sum = 0;
while(n)
{   
    if(n % 2)
        v[i] = 0;
    n /= 2;
    i--;
}
int j = 31;
for(int i : v)
    sum += (i * pow(2, j--));

return sum;
}
