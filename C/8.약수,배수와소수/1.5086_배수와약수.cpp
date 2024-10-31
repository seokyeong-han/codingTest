/* 
5086_배수와 약수
https://www.acmicpc.net/problem/5086

첫 번째 숫자가 두 번째 숫자의 약수라면 factor를, 배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.

*/

#include <bits/stdc++.h>
using namespace std;
int n,m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while (true)
    {
        int multiple = 0; // 배수
        int factor = 0; //약수 
        cin >> n >> m;
        if(n == 0 && m == 0)break;
        
        //배수 
        if(n%m == 0){
            multiple++;
        }
        //약수
        if(n <= m){
            for(int i=1; i<=m; i++){
                if(m%i == 0 && i == n){
                        factor++;
                        break;
                }
            }
            
        }
        if(multiple == 1){
            cout << "multiple" << "\n";
        }else if(factor == 1){
            cout << "factor" << "\n";
        }else if(multiple == 0 && factor == 0){
            cout << "neither" << "\n";
        }
    }
    
   return 0;
}