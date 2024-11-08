/*
5073_삼각형과 세 변
https://www.acmicpc.net/problem/5073

Equilateral :  세 변의 길이가 모두 같은 경우
Isosceles : 두 변의 길이만 같은 경우
Scalene : 세 변의 길이가 모두 다른 경우
단 주어진 세 변의 길이가 삼각형의 조건을 만족하지 못하는 경우에는 "Invalid"
예를 들어 6, 3, 2가 이 경우에 해당한다. 가장 긴 변의 길이보다 나머지 두 변의 길이의 합이 길지 않으면 삼각형의 조건을 만족하지 못한다.
*/
#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0)break;
        int max = arr[0];
        int sum = 0;
        for(int i : arr){
            if(max < i){
                max = i;
            }
            sum += i;
        }
        sum -= max;
        if((sum - max) <= 0){
            cout << "Invalid";
        }else if(arr[0] == arr[1] && arr[1] == arr[2]){
            cout << "Equilateral";
        }else if(arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2]){
            cout << "Isosceles";
        }else{
            cout << "Scalene";
        }
        cout << "\n";
    }
    return 0;
}