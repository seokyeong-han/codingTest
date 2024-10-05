/* 
3052_나머지
https://www.acmicpc.net/problem/3052

ex)

*/
#include <bits/stdc++.h>
using namespace std;

int n,arr[43],cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    for(int i=0; i<10; i++){
        cin >> n;
        arr[n%42] = 1;
    }

    for(int i :arr){
        if(i ==1){
            cnt ++;
        }
    }
    cout << cnt ;
   return 0;
}
