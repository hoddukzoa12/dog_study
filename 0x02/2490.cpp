#include<iostream>
#include<algorithm>
using namespace std;
/*
문제
우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어 도, 개, 걸, 윷, 모를 결정한다.
 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 
 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중 어떤 것인지를 결정하는 프로그램을 작성하라.
*/
int a,b,c,d;
void result(){
    int re = a+b+c+d;
    if(re == 3) cout << "A\n";
    else if(re == 2) cout << "B\n";
    else if(re == 1) cout << "C\n";
    else if(re == 0) cout << "D\n";
    else cout << "E\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++)
    {
        cin >> a >> b >> c >> d;
        result();
    }

    return 0;
}