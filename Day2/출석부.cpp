#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin>>n>>k;
    vector<pair<string,double>> v(n);
    for(auto&[x,y]:v) cin>>x>>y;
    sort(v.begin(),v.end());
    cout<<fixed;
    cout.precision(2);
    cout<<v[k-1].first<<" "<<v[k-1].second;
}
