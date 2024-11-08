/*
3009_네번째점
https://www.acmicpc.net/problem/3009


*/
#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x[3];
    int y[3];
    for(int i=0; i<3; i++){
        cin >> x[i] >> y[i];
    }

    if(x[0] == x[1])cout << x[2] << " ";
    if(x[0] == x[2])cout << x[1] << " ";
    if(x[1] == x[2])cout << x[0] << " ";
    if(y[0] == y[1])cout << y[2];
    if(y[0] == y[2])cout << y[1];
    if(y[1] == y[2])cout << y[0];
    return 0;
}

