/* 
2745_진법변환
https://www.acmicpc.net/problem/2745

B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

ZZZZZ 36 60466175
*/

#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s >> n;
    
    int result = 0;

    for(int i=0; i<s.size(); i++){
        if('0'<=s[i] && s[i]<='9'){
            result = result * n + (s[i] - '0');
        }else{
            result = result * n + (s[i] - 'A' + 10);
        }

    }
    cout << result;
   return 0;
}