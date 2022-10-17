#include <iostream>
using namespace std;
int main() {
	char s[10001];
	int n, cnt = 0;
	scanf("%d", &n);
	scanf("%s", s);
	
	for(int i=1; i <= n; i++){
		if(s[i] != s[i-1]){
			++cnt;
		}
	}
	printf("%d", cnt);
	return 0;
}
