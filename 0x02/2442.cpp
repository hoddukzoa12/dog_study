#include <iostream>
using namespace std;

//https://www.acmicpc.net/problem/2442
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        // 공백 출력
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < i*2 + 1; j++) {
            cout << "*";
        }
        cout << "\n"; // 줄바꿈
    }

    return 0;
}