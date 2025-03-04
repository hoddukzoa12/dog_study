#include<iostream>
using namespace std;

//https://www.acmicpc.net/problem/1267

int main(){
    int n,m[20],Y,M;

    Y=0;
    M=0;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> m[i];
        Y+=(m[i]/30+1)*10;
        M+=(m[i]/60+1)*15;
    }

    if(Y<M) cout << "Y " << Y;
    else if(Y>M) cout << "M " << M;
    else cout << "Y M " << Y;

    return 0;
}