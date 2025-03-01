#include<iostream>
using namespace std;

/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
*/

void score(int num){
    if(num>=90&&num<=100) cout << 'A';
    else if(num>=80&&num<90) cout << 'B';
    else if(num>=70&&num<80) cout << 'C';
    else if(num>=60&&num<70) cout << 'D';
    else cout << 'F';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;

    cin >> num;

    score(num);

    return 0;
}