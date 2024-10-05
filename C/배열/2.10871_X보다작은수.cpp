
/* 
10871_X보다 작은 수
첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다. X보다 작은 수는 적어도 하나 존재한다.
https://www.acmicpc.net/problem/10871
*/
#include <bits/stdc++.h>
using namespace std;

int n,x;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   cin >> n;
   cin >> x;
   int arr[n];
   for(int i=0; i<n; i++){
        cin >> arr[i]; 
   }
 
   for(int i=0; i<n; i++){
        if(arr[i] < x)cout << arr[i] << " ";
   }
   return 0;
}