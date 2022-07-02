// ABC088B - Card Game for Two
// https://atcoder.jp/contests/abs/tasks/abc088_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    //N = 4;

    vector<int> number(N);
    /*
    vector<int> number = {
        20,18,2,18
    };
    */

    for(int i = 0; i < N; i++) {
        cin >> number.at(i);
    }

    sort(rbegin(number), rend(number));

    int answer = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            answer += number.at(i);
        } else {
            answer -= number.at(i);
        }
    }

    cout << answer << endl;
}

