#include <iostream>
#include <algorithm>  // min, max 사용 가능
using namespace std;

//https://www.acmicpc.net/problem/10093

int main() {
    long long int A, B;

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;

    // A가 B보다 클 경우 순서 변경
    if (A > B) swap(A, B);

    // A와 B 사이의 수 개수 출력
    if (A == B) {
        cout << "0\n";  // A와 B가 같으면 사이에 수가 없음
    } 
    else {
        cout << B - A - 1 << '\n';
        for (long long int i = A + 1; i < B; i++) {
            cout << i << ' ';
        }
    }

    return 0;
}