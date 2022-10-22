#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N; 
	cin >> N;
	vector<int> v(N);
	int sum = 0;
	for(auto&t:v){
		cin >> t;
		sum += t;
	}
	
	cout << sum << endl;
	return 0;
}
