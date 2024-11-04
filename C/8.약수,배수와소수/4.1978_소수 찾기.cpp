/*
1978_소수 찾기
https://www.acmicpc.net/problem/1978

1보다 큰 자연수 중 1과 자기 자신만을 약수로 가지는 수다
*/

#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> m;
        if(m == 1)continue;
        vector<int>res;
        for(int j=1; j<=m; j++){
            if(m%j == 0){
                res.push_back(j);
            }
        }
        if(res.size() == 2)cnt++;
    }
    cout << cnt;
    return 0;
}