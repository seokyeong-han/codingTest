/* 
1316_그룹단어체커
https://www.acmicpc.net/problem/1316

ex)
들어오는 단어가 기존에 썻던 단어가 반복되어 나오지 않으면 그룹단어 x

n번째 문자와 n-1번째 문자가 같으면 continue;
n번째 문자와 n-1번째 문자가 다르면 아스키 코드 배열 ++ 배열 i 값이 2일시 그룹 단어가 아니므로 break;
*/

#include <bits/stdc++.h>
using namespace std;
int n,arr[26];
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        int flag = 0;
        int arr[26] = {}; //배열 모든 요소 초기화
        cin >> s;
        for(int j=0; j<s.size(); j++){
            if(s[j] == s[j-1]){
                continue;
            }else{
                arr[s[j] - 'a']++;
                if(arr[s[j] - 'a'] == 2){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            cnt++;
        }
    }
cout << cnt;
   return 0;
}