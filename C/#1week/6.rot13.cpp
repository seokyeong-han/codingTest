//알파벳 13번째이후 값을 출력하는 암호화 = rot13
// 대분자 일때, 소문자 일때 아스키 코드 구분하여 출력

//getline(cin, s);  개행문자를 포함하여 출력 
// 아스키 코드 
// 대문자 : 65 ~ 90
// 소문자 : 97 ~ 122
// One is 1
#include<bits/stdc++.h>
using namespace std;
string str;

int main(){
    getline(cin, str); // 개행 문자를 포함 하여 출력
    //cout << str;
    
    for(int i=0; i<str.size(); i++){
        //cout << str[i];
        if(str[i] >= 65 && str[i] <= 90) { //대문자 
            if(str[i] + 13 > 90){ // str[i]가 +13 해서 90이상일시 다시 65 = A로 돌아오도록 
                str[i] = str[i] + 13 - 26;
            }else{
                str[i] = str[i] + 13;
            }
        }
        else if(str[i] >= 97 && str[i] <= 122){ //소문자
            if(str[i] + 13 > 122){
                str[i] = str[i] + 13 - 26;
            }else{
                str[i] = str[i] + 13;
            }
        }
        cout << str[i];
    }

    return 0;
}