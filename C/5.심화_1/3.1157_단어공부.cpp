/* 
1157_단어공부
https://www.acmicpc.net/problem/1157

ex)

*/

#include <bits/stdc++.h>
using namespace std;
string s;
int arr[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;

    for(char c : s){
        if((int)c >= 97 && (int)c <= 123 ){//소문자일 경우
            arr[c-'a']++;
        }
        if((int)c >= 65 && (int)c <97){//대문자일 경우
            arr[c-'A']++;
        }else{
            
        }
    }

    int maxVal = arr[0];
    int cnt = 0;
    int num = 0;
    for(int i : arr){
        maxVal = max(maxVal, i);
    }
    for(int i=0; i<= 25; i++){
        if(arr[i] == maxVal){
            cnt++;
            num=i+65;
        }
    }
    if(cnt > 1){
        cout << '?';
    }else{
        cout << (char) num;
    } 

   return 0;
}
