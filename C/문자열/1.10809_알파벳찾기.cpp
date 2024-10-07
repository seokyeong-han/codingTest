/*
10809_알파벳찾기
알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

*/
#include <bits/stdc++.h>
using namespace std;
int arr[26];
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for(int i=0; i<26; i++){
        arr[i]=-1;
    }
    int cnt =0;
    for(char c : s){
        if(arr[c -'a'] == -1){
            arr[c -'a'] = cnt;
        }
        cnt++;
    }

    for(int i : arr){
        cout << i << " ";
    }
   return 0;
}
