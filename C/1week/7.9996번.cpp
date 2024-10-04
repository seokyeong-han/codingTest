/*
문제 : https://www.acmicpc.net/problem/9996

ex)
3   -> 파일 명 갯수
a*d -> 파일명 패턴 (파일 첫글자 * 파일 맨 마지막 글자)
abcd -> 파일명
anestonestod -> 파일명
facebook -> 파일명

파일 이름이 패턴과 일치하면 "DA", 일치하지 않으면 "NE"를 출력
*/


#include<bits/stdc++.h>
using namespace std;
int c;
string f,s;
int main(){
    cin >> c;
    //cout << "파일 갯수 : " << c << "\n";
    
    cin >> f;
    //cout << "패턴 : " << f << "\n";
    int pos = f.find('*'); // * 위치
   // cout << "패턴 구분자 위치 : " << pos << "\n";
    
    string str = f.substr(0, pos); // * 이전 부분
    string end = f.substr(pos + 1); // * 이후 부분
    //cout << "패턴 start, end : " << str << ", " << end << "\n";

    for(int i=0; i<c; i++){
        cin >> s;
        //cout << "파일명 : " << s.substr(0, str.size()) << "\n"; //파일명 처음 부터 패턴 str까지
        //cout << "파일명2 : " << s.substr(s.size()-end.size()) << "\n"; // end 사이즈 부터 마지막 글자 까지

        if(str.size() + end.size() > s.size()){ // ad*ad 일때 s = "ad"가 들어와도 true 여서 접두+접미 size 는 입력값보다 커야하는 로직 추가
            cout << "NE\n";
        }else{
            if(s.substr(0, str.size()) == str && s.substr(s.size()-end.size()) == end){ //이 if문만 쓰면 런타임 오류가 남 왜지?
            cout << "DA\n" ;
            }else{
                cout << "NE\n" ;
            }
        }
        
    }
    
    return 0;
}

