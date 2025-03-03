#include<iostream>
using namespace std;

//https://www.acmicpc.net/problem/2576

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[7];
    int re=0,min=101;

    for(int i = 0;i<7;i++){
        cin >> a[i];
        if(a[i]%2==1){
            re+=a[i];
            if(min>a[i]) min=a[i];
        }
    }
    if(re!=0) cout << re << "\n" << min;
    else cout << "-1";
}