/* 
2444_별찍기-7
https://www.acmicpc.net/problem/2444

ex) 출력 오류가 나서 확인해보니 @*이외의 값은 출력이 되면 안된다!
@@@@*    
@@@***   
@@*****  
@******* 
*********
@******* 
@@*****  
@@@***   
@@@@* 
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if (j >= n - 1 - i && j <= n - 1 + i) {
                cout<<'*';
            }else if(j < n - 1 - i){
                cout<<' ';
            }
        }
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if (j >= i && j < 2 * n - 1 - i) {
                cout << '*';
            }else if(j < i){
                cout << ' ';
            }
        }
        cout << endl;
    }
   return 0;
}