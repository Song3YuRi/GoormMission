#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T;
    scanf("%d",&T);
    for(int n, s, a;T--;){
        scanf("%d",&n);
        vector<int> v(n); a=s=0;
        for(auto&t:v) scanf("%d",&t), s+=t;
        for(auto&t:v) if(t*n>=s) ++a;
        printf("%d/%d\n",a,n);
    }
}
