//곱셈
//문제 : https://www.acmicpc.net/problem/1629
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; //별칭 걸어두기
ll a,b,c;
ll go(ll a, ll b){
    if(b == 1) return a % c; 
    ll ret = go(a, b/2);
    ret = (ret * ret) %c;
    if (b % 2) ret = (ret * a) %c;
    return  ret;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;   
    cout << go(a,b);
    return 0;
}
//아레처럼하면 overflow난다
/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;    
    //cout << "a :" <<a<< ", b : " <<b<< ", c : "<<c;
    d = a;
    for(int i=1; i<b; i++){
        cout << i << "\n";
        d = d * a;
    }
    cout << d;
    d = d % c;
    cout << d;
}*/


/*
4 3 3
10 11 12
*/