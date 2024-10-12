/* 
2941_크로아티아알파벳
https://www.acmicpc.net/problem/2941

ex)

*/

#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;

    vector<string> cro = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    for(int i=0; i<cro.size(); i++){
        while (true)
        {
            idx = s.find(cro[i]); //cro에 해당하는 글자 맨앞 index를 호출한다 
                                  //ex) cidx = s.find("lj") → "ljes=njak"에서 "lj"는 인덱스 0에 위치하므로 idx = 0
            if(idx == string::npos){ //string::npos -> 특정문자열을 찾을 수 없을때  
                break;
            }
            s.replace(idx,cro[i].length(),"@");
        }   
    }
    cout << s.length();
   return 0;
}