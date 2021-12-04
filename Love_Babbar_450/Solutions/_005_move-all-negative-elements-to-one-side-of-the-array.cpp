//Quick Sort Partition Approach
// #include <bits/stdc++.h>
// using namespace std;
// void rearrange(int arr[], int arr_size)
// {
//     int j = 0;
//     for (int i = 0; i < arr_size; i++)
//         if (arr[i] < 0)
//         {
//             if (i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
// }

// void printArray(int arr[], int arr_size)
// {
//     cout << "> " << ends;
//     for (int i = 0; i < arr_size; i++)
//         cout << arr[i] << " " << ends;
// }

// int main()
// {
//     int arr_size;
//     cout << "[*] Enter the size of array: " << ends;
//     cin >> arr_size;
//     int arr[arr_size];
//     cout << "[*] Enter Values: " << endl;
//     for (int element = 0; element < arr_size; element++)
//         cin >> arr[element];
//     rearrange(arr, arr_size);
//     printArray(arr, arr_size);
//     return 0;
// }

//Two Pointer Approach
#include <iostream>
using namespace std;
void shiftall(int arr[], int left, int right)
{
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
            left += 1;
        else if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left += 1;
            right -= 1;
        }
        else if (arr[left] > 0 && arr[right] > 0)
            right -= 1;
        else
        {
            left += 1;
            right -= 1;
        }
    }
}
void display(int arr[], int right)
{
    cout << "> " << ends;
    for (int i = 0; i <= right; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr_size;
    cout << "[*] Enter the size of array: " << ends;
    cin >> arr_size;
    int arr[arr_size];
    cout << "[*] Enter Values: " << endl;
    for (int element = 0; element < arr_size; element++)
        cin >> arr[element];
    shiftall(arr, 0, arr_size - 1);
    display(arr, arr_size - 1);
    return 0;
}