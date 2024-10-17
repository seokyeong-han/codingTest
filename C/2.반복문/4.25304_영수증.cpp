/* 
25304_영수증
구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.

첫째 줄에는 영수증에 적힌 총 금액 X가 주어진다.
둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 N이 주어진다.
이후 N개의 줄에는 각 물건의 가격 
a와 개수 
b가 공백을 사이에 두고 주어진다.
*/
#include <bits/stdc++.h>
using namespace std;

int t,n,a,b;
int main() {
    cin >> t >> n;
   for(int i=1; i<=n; i++){
        cin >> a >> b; 
        int sum = 0;
        sum = a*b;
        t = t - sum;
   }
   
   if(t ==0){
    cout << "Yes";
   }else{
    cout << "No";
   }
}