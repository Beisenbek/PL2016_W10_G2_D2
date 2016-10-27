#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;

	bool isPrime[n + 1];

	for(int i = 2; i <= n; ++i){
		isPrime[i] = true;
	}

	int k = (int)sqrt(n);

	for(int i = 2; i <= k; ++i){
		if(isPrime[i]){
			int x = i;
			while(x + i <= n){
				x += i;
				isPrime[x] = false;
			}
		}
	}

	for(int i = 2; i <= n; ++i){
		if(isPrime[i]) cout << i << " ";
	}


	return 0;
}