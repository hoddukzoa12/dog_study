#include<iostream>
using namespace std;

/*
동규는 세수를 하다가 정렬이 하고 싶어졌다.

정수 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어졌다.

정수 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.
*/

int a[3];

void sort(int idx1,int idx2){
    int tmp = a[idx1];
    a[idx1] = a[idx2];
    a[idx2] = tmp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a[0] >> a[1] >> a[2];

    for(int i=2;i>=0;i--){
        for(int j=0;j<i;j++){
            cout << j << '\n';
            if(a[j]>a[j+1]) sort(j,j+1);
        }
    }

    cout << a[0] << ' ' << a[1] << ' ' << a[2];
}