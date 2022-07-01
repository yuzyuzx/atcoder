#include<bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/apg4b/tasks/APG4b_ce

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> A(M), B(M);

    for(int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<char>> data(N, vector<char>(N));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            data.at(i).at(j) = '-';
        }
    }

    for(int i = 0; i < M; i++) {
        data.at(A.at(i)-1).at(B.at(i)-1) = 'o';
        data.at(B.at(i)-1).at(A.at(i)-1) = 'x';
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << data.at(i).at(j);

            if(j == N-1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }

}


