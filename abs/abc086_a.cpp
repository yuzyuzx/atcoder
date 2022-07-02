// ABC086A - Product
// https://atcoder.jp/contests/abs/tasks/abc086_a

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    string answer;

    if((a * b) % 2 == 0) {
        answer = "Even";
    } else {
        answer = "Odd";
    }

    cout << answer << endl;

    return 0;
}
