#include<iostream>
using namespace std;

/*
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다..

예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의 배수이기 때문에 윤년이다.
*/

bool yoon(int year){
    if(year%400==0){
        return true;
    }
    else if(year%100!=0&&year%4==0){
        return true;
    }
    else return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int year;
    cin >> year;
    if(yoon(year)) cout << "1";
    else cout << "0";

    return 0;
}