//팰린드롬 만들기
// 문제 : https://www.acmicpc.net/problem/1213

#include<bits/stdc++.h>
using namespace std;
string s, ret; 
int cnt[200], flag; 
char mid;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for(char a : s)cnt[a]++;

    // cnt 배열의 값 출력
    /*for (int i = 0; i < 200; i++) {
        if (cnt[i] > 0) { // 빈도수가 0보다 큰 경우만 출력
            cout << "문자 '" << static_cast<char>(i) << "'의 빈도: " << i << ","<< cnt[i] << "\n";
        }
    }*/
    for(int i = 'Z'; i >= 'A'; i--){ //역순으로 
       // cout << cnt[i];
        if(cnt[i]){
            if(cnt[i] &1){
                //중간값을 제외하고 홀수가 올 수 없어 flag로 확인
                mid = char(i);
                flag ++;
                cnt[i]--; //짝수가 되도록 cnt 수정(알파벳 검출 갯수를 하나 빼주는 거)
            }
            if(flag ==2){ //홀수가 2번 나오면 팰린트롬 x
                break;
            }
            for(int j=0; j<cnt[i]; j+= 2){
                ret = char(i) + ret; // 뒤에 글씨 추가
                ret += char(i) ; // 앞에 글씨 추가
            }
        }
    }
    
    if(mid){ //중간값이 있으면
        ret.insert(ret.begin() + ret.size() / 2, mid) ;
    }
    if(flag ==2){
        cout << "I'm Sorry Hansoo" << "\n";
    }else cout << ret ;
}
/*

AABB

*/