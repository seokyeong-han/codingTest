//revers 문제
//문제 : https://www.acmicpc.net/source/share/c7b230ec84bf4153a125b858a5ef77e2

// revers 함수를 써서 문자열 비교 후 출력

#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;  
string str, temp;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;
    //cout << str << "\n";
    temp = str;
    
    reverse(temp.begin(), temp.end());
    //cout << "temp : " << temp;

    if(str == temp){ cout << 1;}
    else {cout << 0;}

    return 0;
}