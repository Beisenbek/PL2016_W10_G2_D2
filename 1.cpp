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

	sort(v.begin(),v.end());

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	return 0;
}