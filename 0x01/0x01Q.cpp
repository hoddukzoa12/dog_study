#include<iostream>
using namespace std;

/*
문제 1
N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 반환하는 함수 func1(int N) 을 작성하라.
N 은 10만 이하의 자연수 이다.
시간 복잡도 : O(N)
*/
int func1(int N){
    int sum=0;
    for(int i=0; i<=N; i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    return sum;
}

/*
문제 2
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을
존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
시간 복잡도 : O(N^2)
*/
int func2(int arr[], int N){
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i]+arr[j]==100){
                return 1;
            }
        }
    }
    return 0;
}
/*
문제 3
N이 제곱수이면 1을 반환하고, 제곱수가 아니면 0을 반환하는 함수 func3(int N)을 작성하라.
N은 1 이상 10억 이하의 자연수이다.
시간복잡도 : O(루트N)
*/
int func3(int N){
    for(int i=1;i*i<=N;i++){
        if(i*i==N) return 1;
    }
    return 0;
}
/*
문제 4
N 이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 func4(int N)을 작석하라.
N은 10억 이하의 자연수이다.
시간복잡도 : O(lgN)
*/
int func4(int N){
    int result = 1;
    while(result*2<=N){
        result=result*2;
    }
    return result;
}

int main(){
    cout<<func1(16)<<'\n';
    cout<<func1(34567)<<'\n';
    cout<<func1(27639)<<'\n'<<'\n';

    int arr1[] = {1, 52, 48};
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};

    cout<<func2(arr1, 3)<<'\n';
    cout<<func2(arr2, 2)<<'\n';
    cout<<func2(arr3, 4)<<'\n'<<'\n';

    cout<<func3(9)<<'\n';
    cout<<func3(693953651)<<'\n';
    cout<<func3(756580036)<<'\n'<<'\n';

    cout<<func4(5)<<'\n';
    cout<<func4(97615282)<<'\n';
    cout<<func4(1024)<<'\n'<<'\n';

    return 0;
}