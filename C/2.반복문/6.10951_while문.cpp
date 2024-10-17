/* 
10951_while문
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
입력값이 없으면 break 되어야 한다.
*/
#include <bits/stdc++.h>
using namespace std;

int a,b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   while (cin >> a >> b){
        cout << a+b << "\n";
   }
   return 0;
}