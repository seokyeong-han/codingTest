/* 
2501_약수구하기
https://www.acmicpc.net/problem/2501


*/

#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0)cnt ++;
        if(cnt == m){
            cout << i;
            break;
        }
        if(i == n && cnt < m)cout << 0;
    }
    return 0;
}