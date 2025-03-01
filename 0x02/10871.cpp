#include<iostream>
using namespace std;

/*
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
*/

int N, X;

void func(int a[]) {
    for(int i = 0; i < N; i++) {
        if(a[i] < X) {
            cout << a[i] << ' ';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> X;

    int A[N]; 
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    func(A);
    return 0;
}