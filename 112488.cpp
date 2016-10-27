#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> v;

	int n;
	cin >> n;

	for(int i = 2; i <= n; ++i){
		v.push_back(i);
	}

	for(int i = 0; i < v.size(); ++i){
		if(v[i] != -1){
			cout << v[i] << " ";
			for(int j = i + 1; j < v.size(); ++j){
				if(v[j]!=-1 && v[j]%v[i]==0){
					v[j] = -1;
				}
			}
		}
	}


	return 0;
}