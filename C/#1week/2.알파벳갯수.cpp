//counting 문제 
//문제 : https://www.acmicpc.net/problem/10808

// counting 문제의 경우 map, array로 풀면 된다
// string = map, int = array
// 이 문제의 경우 문자 -> 숫자 변경하는 문제라 array로 풀면 된다
// 아스키 코드
//  A ~ Z = 65 ~ 90
//  a ~ z = 97 ~ 122 

//아스키 코드 char -> int 변환 예시 
// char a = 'a';
// (int)a = 97;
// cnt[a - 'a']; 경우 a의 아스키 코드 97에서 - 97 을 하므로 소수점 a-z까지 범위가 0~25가 되는 것이다. 따라서 cnt[26]으로 설정

#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;  
string str;
int cnt[26];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;
  
    for(char a : str){
    	cnt[a - 'a']++;
	}

   for(int i : cnt){cout << i << " ";} 
    //char a = 'a';
    //cout << "아스키코드 : " << (int)a;
    return 0;
}
