#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define ln '\n'
typedef long long ll;

inline int TransFtoC(int F) {
    return (F - 32) / 1.8;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for(int i = 0; i <= 100; i += 5)
        cout << i << " " << TransFtoC(i) << ln;
}