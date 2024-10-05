/* 
10810_공넣기
https://www.acmicpc.net/problem/10810

ex)
5 4
1 2 3
3 4 4
1 4 1
2 2 2

5개 바구니 
4번 공던지기
1 -> 1~2번 바구니 3씩
2 -> 4~4번 바구니 4씩
3 -> 1~4번 바구니 1씩
4 -> 2~2번 바구니 2씩
최종 -> 1 2 1 1 0
*/
#include <bits/stdc++.h>
using namespace std;

int n,m,a,b,c;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)arr[i]=0;

    for(int i=1; i<=m; i++){
        cin >> a >> b >> c;
        for(int j=a-1; j<=b-1; j++){
            arr[j] = c;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
   return 0;
}