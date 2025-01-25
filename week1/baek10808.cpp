/*
백준 10808번 : https://www.acmicpc.net/problem/10808
문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
*/
#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int arr[26] = {0,};
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}