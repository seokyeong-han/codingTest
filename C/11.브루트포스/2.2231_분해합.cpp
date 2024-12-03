/*
2231_분해합
https://www.acmicpc.net/problem/2798

*/

#include<bits/stdc++.h>
using namespace std;
string str;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    int result = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        int num = i;
        while (num != 0)
        {
            sum += num%10; //한자리씩 더하기
            num /=10;
        }
        if(sum+i == n){
            result = i;
            break;
        }
    }
    cout << result;

    return 0;
}