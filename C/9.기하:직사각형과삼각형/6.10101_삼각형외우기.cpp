/*
10101_삼각형외우기
https://www.acmicpc.net/problem/10101

세 각의 크기가 모두 60이면, Equilateral
세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
세 각의 합이 180이 아닌 경우에는 Error
*/
#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> y >> z;

    if((x+y+z) != 180)cout << "Error";
    else if(x == y && y == z) cout << "Equilateral";
    else if(x == y || x == z || y == z)cout << "Isosceles";
    else cout << "Scalene";
    return 0;
}