/* 
2720_세탁소사장동혁
https://www.acmicpc.net/problem/2720

*/

#include <bits/stdc++.h>
using namespace std;
int n,m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int change[] = {25, 10, 5, 1};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        for(int j=0; j<4; j++){
            if(m > 0){
                cout << m/change[j] << " ";
            }else{
                cout << 0 << " ";
            }
            m = m%change[j];
        }
        cout << "\n";
    }
   return 0;
}