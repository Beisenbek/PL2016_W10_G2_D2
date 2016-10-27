#include <iostream>
#include <vector>

using namespace std;


int main(){

	vector<int> v;
	int k = 0;

	while(true){
		char c = getchar();
		if(c == '\n'){ 
			v.push_back(k);
			break;
		}
		else if(c == ' '){
			v.push_back(k);
			k = 0;
		}
		else {
			k = k*10 + (int(c)-48);
		}
	}
	/*
	"123" "19"

	1
	1*10 + 2 = 12
	12 * 10+ 3 = 123
	*/

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}


	return 0;
}