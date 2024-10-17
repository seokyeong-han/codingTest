/* 
10807_개수세기
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
https://www.acmicpc.net/problem/10807
*/
#include <bits/stdc++.h>
using namespace std;

int n,v,cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
        cin >> arr[i]; 
   }
    cin >> v;
   for(int i=0; i<n; i++){
        if(arr[i] == v)cnt++;
   }
   cout << cnt;

   return 0;
}