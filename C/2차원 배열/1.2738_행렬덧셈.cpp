/* 
2738_행렬덧셈
https://www.acmicpc.net/problem/2738

N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.
첫째줄 3x3 행렬이 있고

A행렬
1 1 1
2 2 2
0 1 0

B행렬
3 3 3
4 4 4
5 5 100

각각 더해주는 문제
*/

#include <bits/stdc++.h>
using namespace std;
int n,m,a[101][101],b[101][101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> b[i][j];
        }
    }

    int result [101][101];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result[i][j] = a[i][j] + b[i][j];
            cout << result [i][j] << " ";
        }
        cout << "\n";
    }

   return 0;
}
