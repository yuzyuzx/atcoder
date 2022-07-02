#include <bits/stdc++.h>
using namespace std;

// aからbまでの総和を求める
int sum(int a, int b) {
    // 処理内容: a〜bまでの総和を計算する
    
    // ベースケース
    if(a == b) {
        return a;
    }

    // 再帰ステップ
    int c = sum(a, b - 1);
    // 7 15 24 34
    //cout << c << endl;

    return c + b;
}

int main() {
    cout << "answer: " << sum(7, 10) << endl;

    for(int i = 0; i < 5; ++i) {
        cout << i << endl;
    }
}

/**
 *
 * sum(7, 10) = 24 + 10 = 34
 * sum(7, 9)  = 15 + 9 = 24
 * sum(7, 8)  = 7 + 8 = 15
 * sum(7, 7)  = 7
 *
 */
