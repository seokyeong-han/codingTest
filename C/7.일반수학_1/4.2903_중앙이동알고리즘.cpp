/* 
2903_중앙이동알고리즘
https://www.acmicpc.net/problem/2903

1   2   3   4     5
2+1 3+2 5+4 9+8   17+16
3*3 5*5 9*9 17*17 33*33
9   25 ....       1089
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int a =2;
    int result;
    for(int i=1; i<=n; i++){
        a = a + a-1;
        if(i ==n){
            result = a * a;
        }
    }
    cout << result ;
   return 0;
}