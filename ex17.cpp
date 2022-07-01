#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/apg4b/tasks/APG4b_cf

int main() {
    int N, S;
    cin >> N >> S;

    vector<int> A(N), P(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    for (int i = 0; i < N; i++) {
        cin >> P.at(i);
    }

    int total = 0;
    int match = 0;

    for(int a : A) {

        for(int p : P) {
            total = a + p;

            if(total == S) {
                match++;
            }

        }
    }

    cout << match << endl;
}

