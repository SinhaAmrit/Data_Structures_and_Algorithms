#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (a[mid] == 0)
            swap(a[mid++], a[low++]);
        else if (a[mid] == 1)
            mid++;
        else
            swap(a[mid], a[high--]);
    }
    cout << "> " << ends;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cout << "[*] Enter the size of array: " << ends;
    cin >> n;
    int arr[n];
    cout << "[*] Enter Values: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort012(arr, n);
}