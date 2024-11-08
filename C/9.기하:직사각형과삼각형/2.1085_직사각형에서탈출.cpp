/*
1085_직사각형에서탈출
https://www.acmicpc.net/problem/1085

0,0 에서 x,y 까지 거리 or x,y 에서 w,h 까지 거리중 가장 가까운 거리 출력
(x,y,w-x,h-y) 가장 작은수
*/
#include<bits/stdc++.h>
using namespace std;
int x,y,w,h;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y >> w >> h;
    int arr[4];
    arr[0] = x;
    arr[1] = y;
    arr[2] = w-x;
    arr[3] = h-y;
    int result = arr[0];
    for(int i: arr){
        if(result > i)result=i;
    }
    cout << result;
    return 0;
}

