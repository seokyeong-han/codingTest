//c++ 에는 split 하는 함수가 없어 test 로직을 작성
// std::string 객체 문자열 클래스
// result.push_back() -> java add 라고 생각하면 될듯

//풀이 방법
// auto end = input.find(delimiter); input 순회 하다가 delimiter 없으면 end 에서 string::npos 출력하게됨
// 맨처음 input.find(delimiter) 값을 구한뒤
// returnt 에 0 부터  delimiter 전까지 값을 넣은후 
// start end값 + 구분자 글자수 값으로 변경
// end 값을 start 부터 구분자까지 순회하며 end 값이 string::npos 멈춘다
#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
  
    while (end != string::npos)
    {   
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    
    result.push_back(input.substr(start));
    return result;
}

int main(){
    string str = "apple,b,c,d"; 
    vector<string> arrays = split(str, ","); 
    for(const string& i : arrays) cout << "\n" << "result : "<< i << "  ";
    return 0;
}