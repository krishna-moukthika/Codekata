#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	int x;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	x = arr[0];
	for (int i = 1; i < n; i++){
		x = x^arr[i];
	}
	cout << x;
	return 0;
}
