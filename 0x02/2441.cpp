#include<iostream>
using namespace std;

//https://www.acmicpc.net/problem/2441

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=N-1;i>=0; i--){
        for(int j = 0; j<N;j++){
            if(j<N-i-1) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
    return 0;
}