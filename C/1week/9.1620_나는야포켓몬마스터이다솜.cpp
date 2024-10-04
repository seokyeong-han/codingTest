// 나는야 포켓몬 마스터 이다솜
// 문제 : https://www.acmicpc.net/source/share/0f8a07e622564e12bd5f262fc8f0d61b
#include <bits/stdc++.h>
using namespace std;
int n,m;
string str;
map <string, int> mp;
map<int, string> mp2;
int main(){
    //입력값이 많아 버퍼 셋팅
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    cout << "n : " << n <<", " << "m : " << m << "\n";

    for(int i = 1; i<= n; i++){
        cin >> str; 
		mp[str] = i + 1;  //string value
		mp2[i + 1] = str; //int value
    }

    for(int i = 1; i<= n; i++){
        cin >> str;
        if(atomic(str.c_str()) == 0){
            //문자일시
            cout << mp[str] << "\n";
        }else{
            //숫자일시
            cout << mp2[atoi(str.c_str())] << "\n"; //atoi 문자열 -> 정수
        }
    }
        


        
    return 0;
}