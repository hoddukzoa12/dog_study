#include<iostream>
using namespace std;

//https://www.acmicpc.net/problem/2440

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0;i<N; i++){
        for(int j = 0; j<N-i;j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}