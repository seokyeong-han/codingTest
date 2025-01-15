/*
19532_수학은비대면강의입니다
https://www.acmicpc.net/problem/2798

연립방정식 풀이를 사용
x -> y계수를 동일하게 만든 후 x만 남도록 
*/

#include<bits/stdc++.h>
using namespace std;
string str;
int a,b,c,d,e,f;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c >> d >> e >> f;
    int x,y;
    x = (e*c-b*f)/(a*e-d*b);
    y = (c*d-a*f)/(b*d-a*e);

    cout << x << " " << y;
    return 0;
}