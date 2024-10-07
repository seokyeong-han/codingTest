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
