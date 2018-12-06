#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int ele;
	vector<int> ans;
	for (int i = 0; i < n; i++){
		cin >> ele;
		if (ele == i) ans.push_back(ele);
	}
	sort(ans.begin(), ans.end());
	if (ans.size() == 0){
		cout << "-1";
		exit(0);
	}
	for (int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	return 0;
}
