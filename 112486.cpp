#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x;
	vector<int> v;

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());

	if(n%2 == 0){
		cout << v[n/2-1] << " " << v[n/2];
	}else{
		cout << v[(n-1)/2];
	}

	return 0;
}