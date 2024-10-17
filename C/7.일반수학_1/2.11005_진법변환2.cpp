/* 
11005_진법변환2
https://www.acmicpc.net/problem/11005

10진법을 B진법 변환 
60466175 36 ZZZZZ
*/

#include <bits/stdc++.h>
using namespace std;
int n,m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    string result;
    while (n > 0)
    {
        int a = n % m;
        cout << a << "\n";
        if(a < 10){
            //숫자
            result += a + '0';
        }else{
            //문자
            result += a - 10 + 'A';
        }
        n /= m;
    }
    reverse(result.begin(), result.end()); 
    //n을 진법 b로 변환할 때 가장 낮은 자리수(1의 자리)부터 계산해야 하여 reverse 사용
    
    cout << result;
   return 0;
}