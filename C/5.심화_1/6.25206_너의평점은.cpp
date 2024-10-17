/* 
25206_너의평점은
https://www.acmicpc.net/problem/25206

ex)
전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.

*/

#include <bits/stdc++.h>
using namespace std;
int n;
string s,g;
double c;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    n = 20;
    
    double sum = 0;
    double res = 0.0;
    for(int i=0; i<n; i++){
        cin >> s >> c >> g;
        if(g == "P")continue;
        sum += c;
        if(g == "F")continue;

        double t = 0;
        for(char c : g){
            if( c == 'A') t = 4.0;
            else if( c == 'B') t = 3.0;
            else if( c == 'C') t = 2.0;
            else if( c == 'D') t = 1.0;
            if( c == '+') t += 0.5;
        }
        res += c * t ;
    }
    cout << fixed << setprecision(6);
    cout << res/sum ;
   return 0;
}