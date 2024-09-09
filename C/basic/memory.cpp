// 메모리 = 1byet 
// &a = int a의 메모리 주소
// i = 0 으로 값을 할당해도 메모리 주소는 변하지 않는다 

#include <bits/stdc++.h> // c++ 모든 라이브러리 불러오기
using namespace std;// cout, cin 사용시 std 생략 namespace
int a;
int main(){
a = 0;
cout << &a << "\n";// --- (5) return 0; // - (6)
}

