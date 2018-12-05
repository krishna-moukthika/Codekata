#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, ele, num;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++){
		cin >> ele;
		v.push_back(ele);
	}
	sort(v.begin(), v.end());
	for (int i = v.size()-1; i >= 0; i--){
		num += v[i] * pow(10, i);
	}
	cout << num;
	return 0;
}
