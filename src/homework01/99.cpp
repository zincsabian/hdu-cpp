#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define ln '\n'
typedef long long ll;

inline void Print(int p, int q) {
    for(int i = 1; i <= p; i++)
        for(int j = 1; j <= q; j++)
            printf(" %d x%2d =%3d %c", i, j, i * j, ",\n"[j==q]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int p, q;
    cin >> p >> q;
    Print(p, q);
}