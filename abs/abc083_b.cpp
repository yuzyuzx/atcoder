// ABC083B - Some Sums
// https://atcoder.jp/contests/abs/tasks/abc083_b

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int answer = 0;

    for(int i = 1; i <= N; i++) {
        int number = i;

        int plus = 0;

        while(true) {
            plus += number % 10;
            number = number / 10;

            //cout << "plus: " << plus << " -- number: " << number << endl;

            if(number <= 0) {
                break;
            }
        }

        if(plus >= A && plus <= B) {
            answer += i;
        }
    }

    cout << answer << endl;

    return 0;
}

