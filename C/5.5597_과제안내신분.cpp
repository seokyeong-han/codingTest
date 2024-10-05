/* 
5597_과제안내신분
https://www.acmicpc.net/problem/5597

ex)

*/
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[31];
    for(int i=0; i<=30; i++){
        arr[i] = 0;
    }

    for(int i=1; i<=28; i++){
        cin >> n;
        arr[n] = 1;
    }

    for(int i=1; i<=30; i++){
        if(arr[i] != 1){
            cout << i << "\n";
        }
    }
   return 0;
}
