/*
2581_소수
https://www.acmicpc.net/problem/2581

*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    vector<int>res;
    for(int i = n; i<=m; i++){
        int cnt = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            res.push_back(i);
        }
    }

    if(res.size() == 0){
        cout << -1;
    }else{
        int sum = 0;
        for(int i : res){
            sum += i;
        }
        cout << sum << "\n";
        cout << res[0];
    }
    return 0;
}
