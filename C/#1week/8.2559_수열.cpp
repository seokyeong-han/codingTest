// 수열
// 문제 : https://www.acmicpc.net/problem/2559

#include <bits/stdc++.h>
using namespace std;
/*
N은 2 이상 100,000 이하이다.
이 수들은 모두 -100 이상 100

10 2
3 -2 -4 -9 0 3 7 13 8 -3
*/
int c,s,temp,psum[100001],ret = -100000;//ret의 값은 int의 최솟값이다.
int main(){
    cin >> c >> s;
    cout << "\n c : "<< c;
    cout << " s : "<< s << "\n";

    for(int i = 1; i <= c; i++){
        cin >> temp; 
        psum[i] = psum[i - 1] + temp; 
    }

    for(int i = 0; i < c; i++){ 
        cout << psum[i] << " ";  
    }

    for(int i = s; i <= c; i++){
		ret = max(ret, psum[i] - psum[i - s]);
	}
	cout << ret << "\n";


    return 0;
}