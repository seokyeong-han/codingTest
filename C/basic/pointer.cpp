//포인터 설명 예제 
// 포인터란 변수에 주소값을 가르키는 타입
// C++에서 *라는 별표는 에스터리스크(asterisk operator)라고도 불립니다.
// pointer는 os에 따라 byte가 다르다 ex) 64bit = 8byet, 32bit = 4byte
// 따라서 int형, double형에 상관없이 8byte로 고정되어 출력된다.

//역참조 연산자
// c의 주소값 포인터 d
// d 포인터 역참조 되어 c 변수값으로 출력됨

//배열


#include <bits/stdc++.h>
using namespace std;

int main(){
    //<타입> * <변수명> = <해당 차입의 변수의 주소>
    // pointer 예시
    //int a = 4;
    //int *b = &a;
    //cout << b ;

    //역참조 연산자 예시
    /* string c = "test";
    string *d = &c;
    cout << *d ;
     */

    // 배열 array to pointer decay
    int a[3] = {1,2,3};
    int *c = a;
    cout << c << "\n"; // c는 a배열의 맨 처음 주소를 가져가게 되어있다. 밑에값이랑 똑같음
    cout << &a[0] << "\n";
    cout << c+1 << "\n"; // 밑에값이랑 똑같음
    cout << &a[1] << "\n";
    return 0;
}