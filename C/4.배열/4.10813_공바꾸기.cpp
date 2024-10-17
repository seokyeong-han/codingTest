/* 
10813_공바꾸기
https://www.acmicpc.net/problem/10813

ex)
5 4 -> 5개의 바구니, 4번 교환
최초 1 2 3 4 5
1 2 -> 1번 교환 2 1 3 4 5
3 4 -> 2번 교환 2 1 4 3 5
1 4 -> 3번 교환 3 1 4 2 5
2 2 -> 4번 교환 3 1 4 2 5
최종 = 3 1 4 2 5
*/
#include <bits/stdc++.h>
using namespace std;

int n,m,a,b,c,d;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)arr[i]=i+1;

    for(int i=1; i<=m; i++){
        c = 0;
        d = 0;
        cin >> a >> b;
        
        c = arr[a-1];
        d = arr[b-1];

        arr[a-1] = d;
        arr[b-1] = c;
        
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
   return 0;
}