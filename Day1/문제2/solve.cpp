#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N, ans = 0;
    string C;
    cin >> N >> C;
    for (int i = 0; i < N; ++i) {
        string D;
        cin >> D;
        for (int j = 0; j + C.size() <= D.size(); ++j) {
            if (D.substr(j, C.size()) == C) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
