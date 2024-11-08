/*
14215_세 막대
https://www.acmicpc.net/problem/14215

삼각형의 조건을 만족하려면, 가장 긴 변의 길이가 나머지 두 변의 길이의 합보다 작아야 한다.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);

    while (true)
    {
        if(arr[0] == arr[1] && arr[1] == arr[2]){
            cout << arr[0] + arr[1] + arr[2];
            break;
        }
        if(arr[0]+ arr[1] <= arr[2]){
            arr[2]--;
            
        }else{
            cout << arr[0]+ arr[1] + arr[2];
            break;
        }
    }
    return 0;
}

