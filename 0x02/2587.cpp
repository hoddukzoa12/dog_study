#include<iostream>
#include<algorithm>
using namespace std;

//https://www.acmicpc.net/problem/2587

bool compare(int a,int b){
    return a>b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    sort(a,a+5,compare);

    cout << (a[0]+a[1]+a[2]+a[3]+a[4])/5 << "\n" << a[2];

    return 0;
}