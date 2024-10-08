/* 
3003_킹,퀸,룩,비숍,나이트,폰
https://www.acmicpc.net/problem/3003

ex)
*/
#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[6] = {1,1,2,2,2,8};
    for(int i=0; i<6; i++){
        cin >> n;
        cout << arr[i] - n << " ";
    }
   return 0;
}