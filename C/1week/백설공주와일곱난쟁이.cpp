// 순열
//문제 : https://www.acmicpc.net/problem/2309
//답  : https://www.acmicpc.net/source/share/5cbef80aaad4484a8c3ea73bebf2c0ab

// 문제 푸는 방식
// 9개의 숫자 닮을 수 있는 배열 선언 int a[9]
// cin.tie(NULL); -> 스캔
// cout.tie(NULL); -> 출력
// a에 스캔 값 닮기
// next_permutation 오름 차순 순열 사용을 위해 sort
// a배열 7개까지 합중 sum 값이 100이되면 순회를 멈추고 출력

#include <bits/stdc++.h>
using namespace std;
int a[9];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> a[i]; 
    }
    sort(a, a+9);
    
    do
    {
       int sum = 0;
       for(int i=0; i<7; i++)sum += a[i];
       if(sum == 100) break;
       
    } while (next_permutation(a,a+9));

    //답
    for(int i = 0; i < 7; i++) cout << a[i] << "\n";
    return 0;
}