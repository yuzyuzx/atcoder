// ABC086A - Product
// https://atcoder.jp/contests/abs/tasks/abc081_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;


    vector<int> data(N);
    for(int i = 0; i < N; i++) {
        cin >> data.at(i);
    }

    int count = 0;

    bool flag = true;
    while(flag) {
        for(int i = 0; i < data.size(); i++) {

            if(data.at(i) % 2 != 0) {
                flag = false;
                break;
            }

            data.at(i) = data.at(i) / 2;
        }

        if(flag == false) {
            break;
        }

        count++;
    }

    cout << count << endl;

    return 0;
}
