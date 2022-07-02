// https://atcoder.jp/contests/apg4b/tasks/APG4b_y

#include <bits/stdc++.h>
using namespace std;

// 配列要素の総和を求める
int arraySum(vector<int> data, int size, int position) {

    cout << "size: " << size-1 << " --- position: " << position << endl;

    // ベースケース
    if(size-1 == position) {
        return data.at(position);
    }

    cout << "aaa: "  << position << endl;

    // 再帰処理
    int answer = arraySum(data, size, position+=1) + data.at(position-1);
    cout << "bbb: " << position << endl;

    return answer;
}

int main() {
    //vector<int> data = {1,1,3,2};
    //vector<int> data = {1,5,3,2,6};
    vector<int> data = {1,5,3,2,6, 10};

    int answer = arraySum(data, data.size(), 0);
    cout << "answer: " << answer << endl;
}
