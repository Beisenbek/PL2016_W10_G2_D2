#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x;
	vector<int> v;

	while(true){
		cin >> x;
		if(x == 0) break;
		v.push_back(x);
	}


	int l = 0;
	int r = v.size()-1;

	while(l<r){
		cout << v[l] + v[r] << " ";
		l++;
		r--;
		if(l == r) cout << v[l];
	}

	return 0;
}
