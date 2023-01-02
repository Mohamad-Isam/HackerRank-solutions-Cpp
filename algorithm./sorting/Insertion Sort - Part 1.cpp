void insertionSort1(int n, vector<int> arr) {
int key = arr[n - 1];
int j = n - 2;
while(j >= 0 && key < arr[j])
{
    arr[j + 1] = arr[j];
    j--;
    for(unsigned int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
arr[j + 1] = key;
for(unsigned int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
