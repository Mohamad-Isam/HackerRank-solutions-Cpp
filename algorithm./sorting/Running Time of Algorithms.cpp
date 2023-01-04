int runningTime(vector<int> arr) {
    int count = 0;
for(unsigned int i = 1; i < arr.size(); i++)
{
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && key < arr[j])
    {
        arr[j + 1] = arr[j];
        j--;
        count++;
    }
    arr[j + 1] = key;
}
return count;
}
