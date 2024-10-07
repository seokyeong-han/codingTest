/* 
10811_바구니뒤집기
https://www.acmicpc.net/problem/10811

ex)

*/
#include <bits/stdc++.h>
using namespace std;

int n,m,a,b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    int arr[n+1];
    for(int i =1; i<=n; i++){
        arr[i] = i;
    }

    for(int i=1; i<=m; i++){
        cin >> a >> b;
        reverse(arr + a, arr + b+1);
    }

    for(int i =1; i<=n; i++){
        cout << arr[i] << " ";
    }

   return 0;
}
