/* 
11718_그대로출력하기
#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (getline(cin, s)){
        if(s == "") break;
        cout << s << "\n";
   }
   return 0;
}
*/
/*
5622_다이얼
아스키 코드
#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
    cin >> s;
    int result= 0;
    for(char c : s){
        result += time[c - 'A'];
    }
    cout << result;
   return 0;
}

*/
/*
2908_상수
#include <bits/stdc++.h>
using namespace std;
string n,m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    reverse(n.begin(), n.end()); //reverse string형식에서 사용 가능
    reverse(m.begin(), m.end());
    int i = stoi(n); // string -> int 형변환
    int j = stoi(m); // string -> int 형변환

    if(i > j){
        cout << i;
    }else if ( j > i){
        cout << j;
    }
   return 0;
}
*/
/*
1152_단어의개수
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin, s); //한줄 전체 (개행문자 포함)
    int cnt =1;
    if (s.length() == 1 && s[0] == ' ') {
		cout << 0;
		return 0;
	}
    for(int i=1; i<s.length()-1; i++){
        if(s[i] == ' ' ){
            cnt ++;
        }
    }
    cout << cnt;

   return 0;
}
*/
/*
11720_숫자의합 
숫자를 문자열로 받아와서 각각의 숫자의 합을 구하는 것이다.
char에서 아스키코드 0의 값을빼주면 정수가 된다.

#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum =0;
    cin >> n >> s;
    for(char c : s){
        sum += c - '0';
    }
    cout << sum ;
   return 0;
}
 * /
/*
11654_아스키 코드
#include <bits/stdc++.h>
using namespace std;
int n;
char s;
int main() {
    //아스키 코드는 string -> int (X)
    // char -> int (o)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s;
    cout << (int)s;
   return 0;
}
*/
/*
9086_문자열
https://www.acmicpc.net/problem/9086
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        cout <<s.substr(0, 1) << s.substr(s.length()-1, 1)<<"\n";
        //맨처음 맨마지막 문자 추출 
    }
   return 0;
}
*/
/*
단어 길이 재기
https://www.acmicpc.net/problem/2743
#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s;
    int cnt = 0;
    for(char c: s){cnt++;}
    cout << cnt;
   return 0;
}
*/
/*
문자와 문자열
https://www.acmicpc.net/problem/27866
#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s; //string, int 받을시 cin >> s >> n; 으로 하면  오류 발생
    cin >> n;
    cout << s.substr(n-1,1);
   return 0;
}
*/
