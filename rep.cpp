#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ele;
    cin >> n;
    map <int, int> num;
    map <int, int> :: iterator it;
    for (int i = 0; i < n; i++){
        cin >> ele;
        it = num.find(ele);
        if (it == num.end()){
            num.insert(make_pair(ele, 1));
        } else {
            int v = it->second;
            num.erase(ele);
            num.insert(make_pair(ele, v+1));
        }
    }
    vector<int> check;
    for (it = num.begin(); it != num.end(); it++){
        if (it->second > 1){
            check.push_back(it->first);
            //cout << it-> first;
        }
    }
    if (check.size() == 0){
        cout << "unique";
        exit(0);
    } 
    sort(check.begin(), check.end());
    for (int i = 0; i < check.size(); i++){
         cout << check[i] << " ";
    }
    return 0;
}
