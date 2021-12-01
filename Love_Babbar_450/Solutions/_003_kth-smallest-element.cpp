#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number_of_elements, k;
    cout << "[*] Enter number of elements: ";
    cin >> number_of_elements;
    int arr[number_of_elements];
    cout << "[*] Enter elements: " << endl;
    for (int i = 0; i < number_of_elements; i++)
        cin >> arr[i];
    cout << "[*] Enter which smallest element you wish to find: ";
    cin >> k;
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int> s(arr, arr + n);
    set<int>::iterator itr = s.begin();
    advance(itr, k - 1);
    cout << "> " << *itr << "!\n";
    return 0;
}
