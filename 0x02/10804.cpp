#include<iostream>
using namespace std;

//https://www.acmicpc.net/problem/10804
int num[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

void ch(int a, int b){
    int tmp = num[a];
    num[a] = num[b];
    num[b] = tmp;
}

void change(int a,int b){
    int n=1;
    while(b-a>=0){
        ch(a-1,b-1);
        a=a+n;
        b=b-n;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int x,y;

    for(int i = 0;i < 10;i++){
        cin >> x >> y;
        change(x,y);
    }
    for(int i = 0 ; i < 20 ; i++){
        cout << num[i] << " ";
    }

    return 0;
}