/* 
2869_달팽이는올라가고싶다
https://www.acmicpc.net/problem/2869


*/

#include<bits/stdc++.h>
using namespace std;
int a,b,v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> a >> b >> v;

    int day;
    if((v-a)%(a-b) == 0){
        day = (v-a)/(a-b)+1;
    }else{
        day = (v-a)/(a-b)+2;
    }
    cout << day;
    
    return 0;
}