/*
2. 알파벳 갯수 문제와 똑같이 풀면됨

6 
michael
jordan
lebron
james
kobe
bryant

*/

#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;  
string str;
int n,a[26];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n; //맨 처음 선수 갯수 받아오기
    
    for(int i=0; i<n; i++){
        cin >> str; //선수이름 받아와서 아스키 코드 count ++ 
        a[str[0] - 'a']++; //str[0] -> 맨 첫 글자만 추출
    }

    string c;
    for(int i=0; i<26; i++){
        
        if(a[i] > 4){
            c += i + 'a'; // 아스키 코드 -> char
        }
    }
  
    if(c == ""){
        cout << "PREDAJA";
    }else{
        cout << c;
    }
        
    return 0;
}