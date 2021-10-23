#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end){
	if (start >= end) return;
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	rvereseArray(arr, start + 1, end - 1);
}

int main(){
	/*********************************Ignore This**********************************/
	/**/	#ifndef ONLINE_JUDGE												/**/
	/**/	// for getting input from input.txt									/**/
	/**/	freopen("input.txt", "r", stdin);									/**/
	/**/	// for writing output to output.txt									/**/
	/**/	freopen("output.txt", "w", stdout);									/**/
	/**/	#endif																/**/
	/******************************************************************************/
	int size = 6;
	int arr[size];
	for (int pos = 0; pos < size; pos++) 
		cin >> arr[pos];
	rvereseArray(arr, 0, size-1);
	for (int pos= 0; pos < size; pos++) 
		cout << arr[pos] << " ";
	return 0;
}