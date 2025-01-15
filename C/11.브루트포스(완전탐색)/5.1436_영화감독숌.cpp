/*
1436_영화감독 숌
https://www.acmicpc.net/problem/1436
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    int result = 665;
    string temp;

    for(int i=0; i<n; i++){
        while (true)
        {
            result++;
            temp = to_string(result); //result string로 형변환
            if(temp.find("666") != -1){ // 문자열에서 "666" 찾으면 1 반환
                //cout << "i : " << i << "," << result << "\n";
                break;
            }
        }
    }
    cout << result;
    return 0;
}
