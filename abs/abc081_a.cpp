// ABC081A - Placing Marbles
// https://atcoder.jp/contests/abs/tasks/abc081_a

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s.at(i) == '1') {
            count++;
        }
    }

    cout << count << endl;

    /*
    char a, b, c;
    cin >> a >> b >> c;


    int count = 0;

    if(a == '1') count++;
    if(b == '1') count++;
    if(c == '1') count++;

    cout << count << endl;
    */

    return 0;
}
