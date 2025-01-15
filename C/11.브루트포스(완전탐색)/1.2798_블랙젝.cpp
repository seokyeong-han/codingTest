/*
2798_블랙젝
https://www.acmicpc.net/problem/2798

n개의 숫자에서 3가지 숫자를 조합하여 m에 가까운 숫자를 출력하는 문제

n = 5
5,6,7,8,9
3가지 조합 경우의 수 는 10가지
567, 568, 569, 578, 579, 589
678, 679, 689
789
따라서 
첫번째 자리 5 ~ 7 (n ~ n-2)
두번째 자리 6 ~ 8 (n+1 ~ n-1)
세번째 자리 7 ~ 9 (n+2 ~ n)
3중 for문을 돌려서 sum값을 찾도록 하겠슴
*/

#include<bits/stdc++.h>
using namespace std;
int n, m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    int arr[n];
    int sum = 0;
    int max = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                sum = arr[i] + arr[j] + arr[k];

                if(sum <= m && max < sum){
                    max = sum;
                }
            }
        }
    }
    cout << max;
    return 0;
}

