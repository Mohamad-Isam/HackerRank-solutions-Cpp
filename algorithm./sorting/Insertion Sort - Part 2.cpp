//there are two solution .. this is the first one
void insertionSort2(int n, vector<int> arr) {
for(int i = 1; i < n; i++)
{
    sort(arr.begin(), arr.begin() + i + 1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
}
// and this is the standard one 
void insertionSort2(int n, vector<int> arr)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < v[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
      for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
      cout << endl;
    }
}
